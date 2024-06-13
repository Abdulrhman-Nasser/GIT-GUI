#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDir>
#include <QGraphicsDropShadowEffect>
#include "dirpath.h"
#include "gitbash.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void applyShadowAndStyle(QPushButton* button, const QString backgroundColor, const QString hoverColor, const QString textColor);
    void DarkMode();
    void LightMode();

private slots:
    void on_pb_path_clicked();
    void on_pb_back_clicked();
    void on_pb_start_clicked();
    void on_pb_status_clicked();
    void on_pd_add_clicked();

    void on_pb_reset_clicked();

    void on_pb_commit_clicked();

    void on_pb_log_clicked();

    void on_pb_softreset_clicked();

    void on_pb_checkout_clicked();

    void on_pb_diff_clicked();

    void on_pb_delete_clicked();

    void on_pb_createbranch_clicked();

    void on_pb_remote_clicked();

    void on_pb_remove_clicked();

    void on_pb_rename_clicked();

    void on_pb_fetch_clicked();

    void on_pb_pull_clicked();

    void on_pb_merge_clicked();

    void on_pb_push_clicked();

    void on_horizontalSlider_valueChanged(int value);

signals:
    void UpdateOptions(QString path);
public slots:
    void receiveData(QByteArray data);
    void updateComboBoxes(QStringList,QStringList,QStringList);
private:
    Ui::MainWindow *ui;
    DirPath dirpath;
    QString path;
    GitBash terminal;
    QString username;
    QString email;
    QString cloneurl;
};
#endif // MAINWINDOW_H
