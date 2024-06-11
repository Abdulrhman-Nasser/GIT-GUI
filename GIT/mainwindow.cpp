#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->L_path->setText("");
    path=dirpath.getPath();
    ui->stackedWidget->setCurrentIndex(0);
    connect(&terminal,&GitBash::sendData,this,&MainWindow::receiveData);
    connect(this,&MainWindow::UpdateOptions,&terminal,&GitBash::updateAddReset);
    connect(&terminal,&GitBash::updateboxes,this,&MainWindow::updateComboBoxes);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_path_clicked()
{
    dirpath.readPath();
    path=dirpath.getPath();
    qDebug()<<path;
    ui->L_path->setText("Path selected : "+dirpath.getPath());
    qDebug()<<ui->L_path->text();
}



void MainWindow::receiveData(QByteArray data)
{
    ui->listWidget->addItem(data);
}

void MainWindow::updateComboBoxes(QStringList listadd,QStringList listreset,QStringList listcheckout)
{
    ui->cb_add->clear();
    ui->cb_reset->clear();
    ui->cb_checkout->clear();
    ui->cb_add->addItems(listadd);
    ui->cb_reset->addItems(listreset);
    ui->cb_checkout->addItems(listcheckout);
}


void MainWindow::on_pb_back_clicked()
{
    ui->L_path->clear();
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pb_start_clicked()
{
    username=ui->LE_username->text();
    email=ui->LE_email->text();
    cloneurl=ui->LE_url->text();
    if(username!="")
    {
        terminal.sendCommand("git config user.name "+username,path);
    }
    if(email!="")
    {
        terminal.sendCommand("git config user.email "+email,path);
    }
    if(cloneurl!="")
    {
        terminal.sendCommand("git clone "+cloneurl,path);
    }
    ui->L_currentpath->setText("Current working path : "+path);
    if(terminal.CheckGitInit(path))
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        terminal.sendCommand("git init", path);
        ui->stackedWidget->setCurrentIndex(1);
    }
    emit UpdateOptions(path);

}


void MainWindow::on_pb_status_clicked()
{
    terminal.sendCommand("git status", path);
    emit UpdateOptions(path);
}


void MainWindow::on_pd_add_clicked()
{
    QString str=ui->cb_add->currentText();
    if(str=="All")
        str = ".";
    terminal.sendCommand("git add "+str,path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_reset_clicked()
{
    QString str=ui->cb_reset->currentText();
    if(str=="All")
        str = "";
    terminal.sendCommand("git reset "+str,path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_commit_clicked()
{
    terminal.sendCommand("git commit -m"+ui->LE_commit->text(),path);
    emit UpdateOptions(path);
    ui->LE_commit->clear();
}


void MainWindow::on_pb_log_clicked()
{
    terminal.sendCommand("git log",path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_softreset_clicked()
{
    terminal.sendCommand("git reset --soft HEAD~1",path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_checkout_clicked()
{
    terminal.sendCommand("git checkout "+ui->cb_checkout->currentText(),path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_diff_clicked()
{
    terminal.sendCommand("git diff",path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_delete_clicked()
{
    terminal.sendCommand("git branch -D "+ui->cb_checkout->currentText(),path);
    emit UpdateOptions(path);
}


void MainWindow::on_pb_createbranch_clicked()
{
    terminal.sendCommand("git branch "+ui->LE_createbranch->text(),path);
    emit UpdateOptions(path);
    ui->LE_createbranch->clear();
}


void MainWindow::on_pb_remote_clicked()
{
    if(!(ui->LE_remoteurl->text().isEmpty() && ui->LE_remotealias->text().isEmpty()))
    {
        terminal.sendCommand("git remote add "+ui->LE_remotealias->text()+" "+ui->LE_remoteurl->text(),path);
        emit UpdateOptions(path);
        ui->LE_remotealias->clear();
        ui->LE_remoteurl->clear();
    }
    else
    {
        terminal.sendCommand("git remote ",path);
    }

}


void MainWindow::on_pb_remove_clicked()
{
    if(!(ui->LE_removeremote->text().isEmpty()))
    {
        terminal.sendCommand("git remote remove "+ui->LE_removeremote->text(),path);
        emit UpdateOptions(path);
        ui->LE_removeremote->clear();
    }
    else
    {
        QMessageBox::warning(nullptr,"Warning","Enter name of remote to remove");
    }
}


void MainWindow::on_pb_rename_clicked()
{
    if(!(ui->LE_renameold->text().isEmpty() && ui->LE_renamenew->text().isEmpty()))
    {
        terminal.sendCommand("git remote rename "+ui->LE_renameold->text()+" "+ui->LE_renamenew->text(),path);
        emit UpdateOptions(path);
        ui->LE_renameold->clear();
        ui->LE_renamenew->clear();
    }
    else
    {
        QMessageBox::warning(nullptr,"Warning","Enter new and old names! ");
    }
}


void MainWindow::on_pb_fetch_clicked()
{
    if(!(ui->LE_fetchalias->text().isEmpty()))
    {
        terminal.sendCommand("git fetch "+ui->LE_fetchalias->text(),path);
        emit UpdateOptions(path);
        ui->LE_fetchalias->clear();
    }
    else
    {
        QMessageBox::warning(nullptr,"Warning","Enter name of alias to fetch");
    }
}


void MainWindow::on_pb_pull_clicked()
{
    terminal.sendCommand("git pull",path);
}


void MainWindow::on_pb_merge_clicked()
{
    if(!(ui->LE_mergebranch->text().isEmpty()))
    {
        terminal.sendCommand("git merge "+ui->LE_mergebranch->text(),path);
        emit UpdateOptions(path);
        ui->LE_renameold->clear();
        ui->LE_renamenew->clear();
    }
    else
    {
        QMessageBox::warning(nullptr,"Warning","Enter name of branch to merge! ");
    }
}


void MainWindow::on_pb_push_clicked()
{
    if(!(ui->LE_pushalias->text().isEmpty() && ui->LE_pushbranch->text().isEmpty()))
    {
        terminal.sendCommand("git push "+ui->LE_pushalias->text()+" "+ui->LE_pushbranch->text(),path);
        emit UpdateOptions(path);
        ui->LE_pushbranch->clear();
        ui->LE_pushalias->clear();
    }
    else
    {
        QMessageBox::warning(nullptr,"Warning","Enter Alias and Branch to push! ");
    }
}

