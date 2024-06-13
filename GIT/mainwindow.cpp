#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::applyShadowAndStyle(QPushButton *button, const QString backgroundColor, const QString hoverColor, const QString textColor)
{
    QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect();
    shadowEffect->setBlurRadius(10);
    shadowEffect->setXOffset(5);
    shadowEffect->setYOffset(5);
    shadowEffect->setColor(QColor(0, 0, 0, 160));

    // Apply the shadow effect to the button
    button->setGraphicsEffect(shadowEffect);

    // Set the stylesheet for the button including the hover state
    button->setStyleSheet(
        "QPushButton { background-color: " + backgroundColor + "; color: "+textColor+"; }"
                                                                                         "QPushButton:hover { background-color: " + hoverColor + "; }"
        );
}

void MainWindow::DarkMode()
{
    QString buttonsColor = "#373737";
    QString buttonsHoverColor = "#730066";
    QString LineColor = "363636";
    ui->centralwidget->setStyleSheet("background-color: #2c2c2c;");
    //ui->pb_start->setStyleSheet("background-color: #2c2c2c; color: white; border: 2px solid #ffffff;");
    applyShadowAndStyle(ui->pb_path,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_start,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_back,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_checkout,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_clear,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_commit,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_createbranch,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_delete,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_diff,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_fetch,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_log,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_merge,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_pull,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_push,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_remote,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_remove,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_rename,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_reset,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_status,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pb_softreset,buttonsColor,buttonsHoverColor,"white");
    applyShadowAndStyle(ui->pd_add,buttonsColor,buttonsHoverColor,"white");

    //  Setting textlines
    ui->LE_username->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_commit->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_createbranch->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_email->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_fetchalias->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_mergebranch->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_pushalias->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_remotealias->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_pushbranch->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_remoteurl->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_removeremote->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_url->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_renameold->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->LE_renamenew->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->cb_add->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->cb_checkout->setStyleSheet("background-color: #4f4f4f; color: white");
    ui->cb_reset->setStyleSheet("background-color: #4f4f4f; color: white");

    //  Setting line edits
    ui->L_email->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: white");
    ui->L_username->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: white");
    ui->L_currentpath->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: white");
    ui->L_url->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: white");
    ui->L_path->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: white");
    ui->L_light->setStyleSheet("color: white");
    ui->L_dark->setStyleSheet("color: white");
    ui->horizontalSlider->setStyleSheet("QSlider::handle:horizontal {"
                                        "    background: "+buttonsHoverColor+";"
                                                              "    border: 1px solid "+buttonsHoverColor+";"
                                                              "    width: 18px;"
                                                              "    margin: -2px 0;"
                                                              "    border-radius: 3px;"
                                                              "}");
    ui->listWidget->setStyleSheet("color: white");
    ui->groupBox->setStyleSheet("color: white");
    ui->groupBox_2->setStyleSheet("color: white");
    ui->groupBox_3->setStyleSheet("color: white");
}

void MainWindow::LightMode()
{
    ui->centralwidget->setStyleSheet("");
    ui->pb_start->setStyleSheet("");
    ui->pb_path->setStyleSheet("");
    ui->L_email->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: black");
    ui->L_username->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: black");
    ui->L_currentpath->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: black");
    ui->L_url->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: black");
    ui->L_path->setStyleSheet("font: 700 12pt \"Segoe UI\"; color: black");
    ui->L_light->setStyleSheet("color: black");
    ui->L_dark->setStyleSheet("color: black");

    //  Setting textlines
    ui->LE_username->setStyleSheet("");
    ui->LE_commit->setStyleSheet("");
    ui->LE_createbranch->setStyleSheet("");
    ui->LE_email->setStyleSheet("");
    ui->LE_fetchalias->setStyleSheet("");
    ui->LE_mergebranch->setStyleSheet("");
    ui->LE_pushalias->setStyleSheet("");
    ui->LE_remotealias->setStyleSheet("");
    ui->LE_pushbranch->setStyleSheet("");
    ui->LE_remoteurl->setStyleSheet("");
    ui->LE_removeremote->setStyleSheet("");
    ui->LE_url->setStyleSheet("");
    ui->LE_renameold->setStyleSheet("");
    ui->LE_renamenew->setStyleSheet("");
    ui->cb_add->setStyleSheet("");
    ui->cb_checkout->setStyleSheet("");
    ui->cb_reset->setStyleSheet("");

    applyShadowAndStyle(ui->pb_path,"","","black");
    applyShadowAndStyle(ui->pb_start,"","","black");
    applyShadowAndStyle(ui->pb_back,"","","black");
    applyShadowAndStyle(ui->pb_checkout,"","","black");
    applyShadowAndStyle(ui->pb_clear,"","","black");
    applyShadowAndStyle(ui->pb_commit,"","","black");
    applyShadowAndStyle(ui->pb_createbranch,"","","black");
    applyShadowAndStyle(ui->pb_delete,"","","black");
    applyShadowAndStyle(ui->pb_diff,"","","black");
    applyShadowAndStyle(ui->pb_fetch,"","","black");
    applyShadowAndStyle(ui->pb_log,"","","black");
    applyShadowAndStyle(ui->pb_merge,"","","black");
    applyShadowAndStyle(ui->pb_pull,"","","black");
    applyShadowAndStyle(ui->pb_push,"","","black");
    applyShadowAndStyle(ui->pb_remote,"","","black");
    applyShadowAndStyle(ui->pb_remove,"","","black");
    applyShadowAndStyle(ui->pb_rename,"","","black");
    applyShadowAndStyle(ui->pb_reset,"","","black");
    applyShadowAndStyle(ui->pb_status,"","","black");
    applyShadowAndStyle(ui->pb_softreset,"","","black");
    applyShadowAndStyle(ui->pd_add,"","","black");

    ui->listWidget->setStyleSheet("color: black");
    ui->groupBox->setStyleSheet("");
    ui->groupBox_2->setStyleSheet("");
    ui->groupBox_3->setStyleSheet("");
    ui->horizontalSlider->setStyleSheet("QSlider::handle:horizontal {"
                                        "    background: #5cacee;"
                                        "    border: 1px solid #5cacee;"
                                        "    width: 18px;"
                                        "    margin: -2px 0;"
                                        "    border-radius: 3px;"
                                        "}");
}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("GetGit");
    qDebug()<<QDir::currentPath();
    QIcon windowIcon(QDir::currentPath()+"/back.png");
    if (windowIcon.isNull()) {
        qDebug() << "Can't open icon file";
    } else {
        setWindowIcon(windowIcon);
    }
    LightMode();
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


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if(value)
    {
        DarkMode();
    }
    else
    {
        LightMode();
    }
}

