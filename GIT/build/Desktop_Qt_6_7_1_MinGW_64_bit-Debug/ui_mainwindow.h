/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *Select_Path;
    QPushButton *pb_start;
    QPushButton *pb_path;
    QLabel *L_path;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *L_username;
    QLineEdit *LE_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *L_;
    QLineEdit *LE_email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *L_path_4;
    QLineEdit *LE_url;
    QWidget *init;
    QListWidget *listWidget;
    QPushButton *pb_clear;
    QPushButton *pb_back;
    QLabel *L_currentpath;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pb_status;
    QPushButton *pb_log;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cb_add;
    QPushButton *pd_add;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cb_reset;
    QPushButton *pb_reset;
    QPushButton *pb_diff;
    QPushButton *pb_softreset;
    QGridLayout *gridLayout;
    QPushButton *pb_commit;
    QLineEdit *LE_commit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *LE_renameold;
    QLineEdit *LE_renamenew;
    QPushButton *pb_rename;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *LE_removeremote;
    QPushButton *pb_remove;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *LE_fetchalias;
    QPushButton *pb_fetch;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *LE_mergebranch;
    QPushButton *pb_merge;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *LE_remoteurl;
    QLineEdit *LE_remotealias;
    QPushButton *pb_remote;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *LE_pushalias;
    QLineEdit *LE_pushbranch;
    QPushButton *pb_push;
    QPushButton *pb_pull;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pb_delete;
    QPushButton *pb_checkout;
    QComboBox *cb_checkout;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pb_createbranch;
    QLineEdit *LE_createbranch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(874, 640);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        Select_Path = new QWidget();
        Select_Path->setObjectName("Select_Path");
        pb_start = new QPushButton(Select_Path);
        pb_start->setObjectName("pb_start");
        pb_start->setGeometry(QRect(310, 460, 171, 41));
        pb_path = new QPushButton(Select_Path);
        pb_path->setObjectName("pb_path");
        pb_path->setGeometry(QRect(610, 50, 131, 29));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_path->sizePolicy().hasHeightForWidth());
        pb_path->setSizePolicy(sizePolicy);
        L_path = new QLabel(Select_Path);
        L_path->setObjectName("L_path");
        L_path->setGeometry(QRect(31, 52, 541, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(L_path->sizePolicy().hasHeightForWidth());
        L_path->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(Select_Path);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 130, 801, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        L_username = new QLabel(layoutWidget);
        L_username->setObjectName("L_username");

        horizontalLayout->addWidget(L_username);

        LE_username = new QLineEdit(layoutWidget);
        LE_username->setObjectName("LE_username");

        horizontalLayout->addWidget(LE_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        L_ = new QLabel(layoutWidget);
        L_->setObjectName("L_");

        horizontalLayout_2->addWidget(L_);

        LE_email = new QLineEdit(layoutWidget);
        LE_email->setObjectName("LE_email");

        horizontalLayout_2->addWidget(LE_email);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        L_path_4 = new QLabel(layoutWidget);
        L_path_4->setObjectName("L_path_4");

        horizontalLayout_3->addWidget(L_path_4);

        LE_url = new QLineEdit(layoutWidget);
        LE_url->setObjectName("LE_url");

        horizontalLayout_3->addWidget(LE_url);


        verticalLayout->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(Select_Path);
        init = new QWidget();
        init->setObjectName("init");
        listWidget = new QListWidget(init);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 20, 411, 551));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        pb_clear = new QPushButton(init);
        pb_clear->setObjectName("pb_clear");
        pb_clear->setGeometry(QRect(490, 550, 80, 24));
        pb_back = new QPushButton(init);
        pb_back->setObjectName("pb_back");
        pb_back->setGeometry(QRect(730, 550, 80, 24));
        L_currentpath = new QLabel(init);
        L_currentpath->setObjectName("L_currentpath");
        L_currentpath->setGeometry(QRect(0, 0, 841, 21));
        groupBox = new QGroupBox(init);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(540, 30, 311, 251));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 30, 311, 253));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_status = new QPushButton(layoutWidget1);
        pb_status->setObjectName("pb_status");

        verticalLayout_2->addWidget(pb_status);

        pb_log = new QPushButton(layoutWidget1);
        pb_log->setObjectName("pb_log");

        verticalLayout_2->addWidget(pb_log);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        cb_add = new QComboBox(layoutWidget1);
        cb_add->setObjectName("cb_add");

        horizontalLayout_5->addWidget(cb_add);

        pd_add = new QPushButton(layoutWidget1);
        pd_add->setObjectName("pd_add");

        horizontalLayout_5->addWidget(pd_add);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        cb_reset = new QComboBox(layoutWidget1);
        cb_reset->setObjectName("cb_reset");

        horizontalLayout_4->addWidget(cb_reset);

        pb_reset = new QPushButton(layoutWidget1);
        pb_reset->setObjectName("pb_reset");

        horizontalLayout_4->addWidget(pb_reset);


        verticalLayout_2->addLayout(horizontalLayout_4);

        pb_diff = new QPushButton(layoutWidget1);
        pb_diff->setObjectName("pb_diff");

        verticalLayout_2->addWidget(pb_diff);

        pb_softreset = new QPushButton(layoutWidget1);
        pb_softreset->setObjectName("pb_softreset");

        verticalLayout_2->addWidget(pb_softreset);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pb_commit = new QPushButton(layoutWidget1);
        pb_commit->setObjectName("pb_commit");

        gridLayout->addWidget(pb_commit, 1, 2, 1, 1);

        LE_commit = new QLineEdit(layoutWidget1);
        LE_commit->setObjectName("LE_commit");

        gridLayout->addWidget(LE_commit, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBox_2 = new QGroupBox(init);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(420, 290, 431, 261));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        LE_renameold = new QLineEdit(groupBox_2);
        LE_renameold->setObjectName("LE_renameold");

        horizontalLayout_7->addWidget(LE_renameold);

        LE_renamenew = new QLineEdit(groupBox_2);
        LE_renamenew->setObjectName("LE_renamenew");

        horizontalLayout_7->addWidget(LE_renamenew);

        pb_rename = new QPushButton(groupBox_2);
        pb_rename->setObjectName("pb_rename");

        horizontalLayout_7->addWidget(pb_rename);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        LE_removeremote = new QLineEdit(groupBox_2);
        LE_removeremote->setObjectName("LE_removeremote");

        horizontalLayout_10->addWidget(LE_removeremote);

        pb_remove = new QPushButton(groupBox_2);
        pb_remove->setObjectName("pb_remove");

        horizontalLayout_10->addWidget(pb_remove);


        gridLayout_3->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        LE_fetchalias = new QLineEdit(groupBox_2);
        LE_fetchalias->setObjectName("LE_fetchalias");

        horizontalLayout_8->addWidget(LE_fetchalias);

        pb_fetch = new QPushButton(groupBox_2);
        pb_fetch->setObjectName("pb_fetch");

        horizontalLayout_8->addWidget(pb_fetch);


        gridLayout_3->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        LE_mergebranch = new QLineEdit(groupBox_2);
        LE_mergebranch->setObjectName("LE_mergebranch");

        horizontalLayout_9->addWidget(LE_mergebranch);

        pb_merge = new QPushButton(groupBox_2);
        pb_merge->setObjectName("pb_merge");

        horizontalLayout_9->addWidget(pb_merge);


        gridLayout_3->addLayout(horizontalLayout_9, 6, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        LE_remoteurl = new QLineEdit(groupBox_2);
        LE_remoteurl->setObjectName("LE_remoteurl");

        horizontalLayout_6->addWidget(LE_remoteurl);

        LE_remotealias = new QLineEdit(groupBox_2);
        LE_remotealias->setObjectName("LE_remotealias");

        horizontalLayout_6->addWidget(LE_remotealias);

        pb_remote = new QPushButton(groupBox_2);
        pb_remote->setObjectName("pb_remote");

        horizontalLayout_6->addWidget(pb_remote);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        LE_pushalias = new QLineEdit(groupBox_2);
        LE_pushalias->setObjectName("LE_pushalias");

        horizontalLayout_11->addWidget(LE_pushalias);

        LE_pushbranch = new QLineEdit(groupBox_2);
        LE_pushbranch->setObjectName("LE_pushbranch");

        horizontalLayout_11->addWidget(LE_pushbranch);

        pb_push = new QPushButton(groupBox_2);
        pb_push->setObjectName("pb_push");

        horizontalLayout_11->addWidget(pb_push);


        gridLayout_3->addLayout(horizontalLayout_11, 5, 0, 1, 1);

        pb_pull = new QPushButton(groupBox_2);
        pb_pull->setObjectName("pb_pull");

        gridLayout_3->addWidget(pb_pull, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(init);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(420, 30, 111, 251));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 30, 111, 102));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pb_delete = new QPushButton(layoutWidget2);
        pb_delete->setObjectName("pb_delete");

        verticalLayout_4->addWidget(pb_delete);

        pb_checkout = new QPushButton(layoutWidget2);
        pb_checkout->setObjectName("pb_checkout");

        verticalLayout_4->addWidget(pb_checkout);

        cb_checkout = new QComboBox(layoutWidget2);
        cb_checkout->setObjectName("cb_checkout");

        verticalLayout_4->addWidget(cb_checkout);

        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(0, 140, 110, 66));
        verticalLayout_5 = new QVBoxLayout(layoutWidget3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pb_createbranch = new QPushButton(layoutWidget3);
        pb_createbranch->setObjectName("pb_createbranch");

        verticalLayout_5->addWidget(pb_createbranch);

        LE_createbranch = new QLineEdit(layoutWidget3);
        LE_createbranch->setObjectName("LE_createbranch");

        verticalLayout_5->addWidget(LE_createbranch);

        stackedWidget->addWidget(init);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 874, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pb_clear, &QPushButton::clicked, listWidget, qOverload<>(&QListWidget::clear));
        QObject::connect(pb_back, &QPushButton::clicked, listWidget, qOverload<>(&QListWidget::clear));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pb_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pb_path->setText(QCoreApplication::translate("MainWindow", "Folder", nullptr));
        L_path->setText(QCoreApplication::translate("MainWindow", "Please choose a path", nullptr));
        L_username->setText(QCoreApplication::translate("MainWindow", "Enter User Name", nullptr));
        LE_username->setText(QString());
        L_->setText(QCoreApplication::translate("MainWindow", "       Enter Email", nullptr));
        LE_email->setText(QString());
        L_path_4->setText(QCoreApplication::translate("MainWindow", "            Enter url", nullptr));
        LE_url->setText(QString());
        pb_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pb_back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        L_currentpath->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Local", nullptr));
        pb_status->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        pb_log->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
        pd_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pb_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pb_diff->setText(QCoreApplication::translate("MainWindow", "Diff", nullptr));
        pb_softreset->setText(QCoreApplication::translate("MainWindow", "Soft Reset", nullptr));
        pb_commit->setText(QCoreApplication::translate("MainWindow", "Commit", nullptr));
        LE_commit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Online", nullptr));
        LE_renameold->setPlaceholderText(QCoreApplication::translate("MainWindow", "Old Name", nullptr));
        LE_renamenew->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Name", nullptr));
        pb_rename->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
        LE_removeremote->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Name of remote you want to remove", nullptr));
        pb_remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        LE_fetchalias->setPlaceholderText(QCoreApplication::translate("MainWindow", "Alias", nullptr));
        pb_fetch->setText(QCoreApplication::translate("MainWindow", "Fetch", nullptr));
        LE_mergebranch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Branch", nullptr));
        pb_merge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        LE_remoteurl->setText(QString());
        LE_remoteurl->setPlaceholderText(QCoreApplication::translate("MainWindow", "URL", nullptr));
        LE_remotealias->setPlaceholderText(QCoreApplication::translate("MainWindow", "Alias", nullptr));
        pb_remote->setText(QCoreApplication::translate("MainWindow", "Remote", nullptr));
        LE_pushalias->setPlaceholderText(QCoreApplication::translate("MainWindow", "Alias", nullptr));
        LE_pushbranch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Branch", nullptr));
        pb_push->setText(QCoreApplication::translate("MainWindow", "Push", nullptr));
        pb_pull->setText(QCoreApplication::translate("MainWindow", "Pull", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Branches", nullptr));
        pb_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pb_checkout->setText(QCoreApplication::translate("MainWindow", "CheckOut", nullptr));
        pb_createbranch->setText(QCoreApplication::translate("MainWindow", "Create Branch", nullptr));
        LE_createbranch->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Branch Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
