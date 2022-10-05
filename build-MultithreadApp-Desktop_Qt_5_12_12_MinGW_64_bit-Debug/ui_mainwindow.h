/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_header;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Number;
    QLabel *label_Name;
    QLabel *label_Status;
    QLabel *label_Thread_ID;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_1;
    QLabel *label_1;
    QLabel *label_status_1;
    QLabel *label_ThreadID_1;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_2;
    QLabel *label_11;
    QLabel *label_status_2;
    QLabel *label_ThreadID_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_3;
    QLabel *label_3;
    QLabel *label_status_3;
    QLabel *label_ThreadID_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_4;
    QLabel *label_4;
    QLabel *label_status_4;
    QLabel *label_ThreadID_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_5;
    QLabel *label_5;
    QLabel *label_status_5;
    QLabel *label_ThreadID_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_6;
    QLabel *label_6;
    QLabel *label_status_6;
    QLabel *label_ThreadID_6;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox_7;
    QLabel *label_7;
    QLabel *label_status_7;
    QLabel *label_ThreadID_7;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkBox_8;
    QLabel *label_8;
    QLabel *label_status_8;
    QLabel *label_ThreadID_8;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_9;
    QLabel *label_9;
    QLabel *label_status_9;
    QLabel *label_ThreadID_9;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_10;
    QLabel *label_10;
    QLabel *label_status_10;
    QLabel *label_ThreadID_10;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(944, 792);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(700, 500));
        widget->setMaximumSize(QSize(500, 400));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_header = new QWidget(widget);
        widget_header->setObjectName(QString::fromUtf8("widget_header"));
        horizontalLayout_4 = new QHBoxLayout(widget_header);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_Number = new QLabel(widget_header);
        label_Number->setObjectName(QString::fromUtf8("label_Number"));

        horizontalLayout_4->addWidget(label_Number);

        label_Name = new QLabel(widget_header);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));

        horizontalLayout_4->addWidget(label_Name);

        label_Status = new QLabel(widget_header);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));

        horizontalLayout_4->addWidget(label_Status);

        label_Thread_ID = new QLabel(widget_header);
        label_Thread_ID->setObjectName(QString::fromUtf8("label_Thread_ID"));

        horizontalLayout_4->addWidget(label_Thread_ID);


        verticalLayout->addWidget(widget_header);

        widget_1 = new QWidget(widget);
        widget_1->setObjectName(QString::fromUtf8("widget_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_1->sizePolicy().hasHeightForWidth());
        widget_1->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget_1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_1 = new QCheckBox(widget_1);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));

        horizontalLayout->addWidget(checkBox_1);

        label_1 = new QLabel(widget_1);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        horizontalLayout->addWidget(label_1);

        label_status_1 = new QLabel(widget_1);
        label_status_1->setObjectName(QString::fromUtf8("label_status_1"));

        horizontalLayout->addWidget(label_status_1);

        label_ThreadID_1 = new QLabel(widget_1);
        label_ThreadID_1->setObjectName(QString::fromUtf8("label_ThreadID_1"));

        horizontalLayout->addWidget(label_ThreadID_1);


        verticalLayout->addWidget(widget_1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_6->addWidget(checkBox_2);

        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        label_status_2 = new QLabel(widget_2);
        label_status_2->setObjectName(QString::fromUtf8("label_status_2"));

        horizontalLayout_6->addWidget(label_status_2);

        label_ThreadID_2 = new QLabel(widget_2);
        label_ThreadID_2->setObjectName(QString::fromUtf8("label_ThreadID_2"));

        horizontalLayout_6->addWidget(label_ThreadID_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_3 = new QCheckBox(widget_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_5->addWidget(checkBox_3);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        label_status_3 = new QLabel(widget_3);
        label_status_3->setObjectName(QString::fromUtf8("label_status_3"));

        horizontalLayout_5->addWidget(label_status_3);

        label_ThreadID_3 = new QLabel(widget_3);
        label_ThreadID_3->setObjectName(QString::fromUtf8("label_ThreadID_3"));

        horizontalLayout_5->addWidget(label_ThreadID_3);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_7 = new QHBoxLayout(widget_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        checkBox_4 = new QCheckBox(widget_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        horizontalLayout_7->addWidget(checkBox_4);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        label_status_4 = new QLabel(widget_4);
        label_status_4->setObjectName(QString::fromUtf8("label_status_4"));

        horizontalLayout_7->addWidget(label_status_4);

        label_ThreadID_4 = new QLabel(widget_4);
        label_ThreadID_4->setObjectName(QString::fromUtf8("label_ThreadID_4"));

        horizontalLayout_7->addWidget(label_ThreadID_4);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_8 = new QHBoxLayout(widget_5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_5 = new QCheckBox(widget_5);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout_8->addWidget(checkBox_5);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        label_status_5 = new QLabel(widget_5);
        label_status_5->setObjectName(QString::fromUtf8("label_status_5"));

        horizontalLayout_8->addWidget(label_status_5);

        label_ThreadID_5 = new QLabel(widget_5);
        label_ThreadID_5->setObjectName(QString::fromUtf8("label_ThreadID_5"));

        horizontalLayout_8->addWidget(label_ThreadID_5);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_9 = new QHBoxLayout(widget_6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkBox_6 = new QCheckBox(widget_6);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        horizontalLayout_9->addWidget(checkBox_6);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        label_status_6 = new QLabel(widget_6);
        label_status_6->setObjectName(QString::fromUtf8("label_status_6"));

        horizontalLayout_9->addWidget(label_status_6);

        label_ThreadID_6 = new QLabel(widget_6);
        label_ThreadID_6->setObjectName(QString::fromUtf8("label_ThreadID_6"));

        horizontalLayout_9->addWidget(label_ThreadID_6);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_11 = new QHBoxLayout(widget_7);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        checkBox_7 = new QCheckBox(widget_7);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        horizontalLayout_11->addWidget(checkBox_7);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_11->addWidget(label_7);

        label_status_7 = new QLabel(widget_7);
        label_status_7->setObjectName(QString::fromUtf8("label_status_7"));

        horizontalLayout_11->addWidget(label_status_7);

        label_ThreadID_7 = new QLabel(widget_7);
        label_ThreadID_7->setObjectName(QString::fromUtf8("label_ThreadID_7"));

        horizontalLayout_11->addWidget(label_ThreadID_7);


        verticalLayout->addWidget(widget_7);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_14 = new QHBoxLayout(widget_8);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        checkBox_8 = new QCheckBox(widget_8);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        horizontalLayout_14->addWidget(checkBox_8);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_14->addWidget(label_8);

        label_status_8 = new QLabel(widget_8);
        label_status_8->setObjectName(QString::fromUtf8("label_status_8"));

        horizontalLayout_14->addWidget(label_status_8);

        label_ThreadID_8 = new QLabel(widget_8);
        label_ThreadID_8->setObjectName(QString::fromUtf8("label_ThreadID_8"));

        horizontalLayout_14->addWidget(label_ThreadID_8);


        verticalLayout->addWidget(widget_8);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_10 = new QHBoxLayout(widget_9);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkBox_9 = new QCheckBox(widget_9);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        horizontalLayout_10->addWidget(checkBox_9);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);

        label_status_9 = new QLabel(widget_9);
        label_status_9->setObjectName(QString::fromUtf8("label_status_9"));

        horizontalLayout_10->addWidget(label_status_9);

        label_ThreadID_9 = new QLabel(widget_9);
        label_ThreadID_9->setObjectName(QString::fromUtf8("label_ThreadID_9"));

        horizontalLayout_10->addWidget(label_ThreadID_9);


        verticalLayout->addWidget(widget_9);

        widget_10 = new QWidget(widget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_2 = new QHBoxLayout(widget_10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_10 = new QCheckBox(widget_10);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        horizontalLayout_2->addWidget(checkBox_10);

        label_10 = new QLabel(widget_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        label_status_10 = new QLabel(widget_10);
        label_status_10->setObjectName(QString::fromUtf8("label_status_10"));

        horizontalLayout_2->addWidget(label_status_10);

        label_ThreadID_10 = new QLabel(widget_10);
        label_ThreadID_10->setObjectName(QString::fromUtf8("label_ThreadID_10"));

        horizontalLayout_2->addWidget(label_ThreadID_10);


        verticalLayout->addWidget(widget_10);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(widget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 944, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_Number->setText(QApplication::translate("MainWindow", "Number", nullptr));
        label_Name->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_Status->setText(QApplication::translate("MainWindow", "Status", nullptr));
        label_Thread_ID->setText(QApplication::translate("MainWindow", "Thread ID", nullptr));
        checkBox_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_1->setText(QApplication::translate("MainWindow", "Task 1", nullptr));
        label_status_1->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_1->setText(QApplication::translate("MainWindow", "Thread ID 1", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Task 2", nullptr));
        label_status_2->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_2->setText(QApplication::translate("MainWindow", "Thread ID 2", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Task 3", nullptr));
        label_status_3->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_3->setText(QApplication::translate("MainWindow", "Thread ID 3", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Task 4", nullptr));
        label_status_4->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_4->setText(QApplication::translate("MainWindow", "Thread ID 4", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Task 5", nullptr));
        label_status_5->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_5->setText(QApplication::translate("MainWindow", "Thread ID 5", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Task 6", nullptr));
        label_status_6->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_6->setText(QApplication::translate("MainWindow", "Thread ID 6", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Task 7", nullptr));
        label_status_7->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_7->setText(QApplication::translate("MainWindow", "Thread ID 7", nullptr));
        checkBox_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Task 8", nullptr));
        label_status_8->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_8->setText(QApplication::translate("MainWindow", "Thread ID 8", nullptr));
        checkBox_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Task 9", nullptr));
        label_status_9->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_9->setText(QApplication::translate("MainWindow", "Thread ID 9", nullptr));
        checkBox_10->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Task 10", nullptr));
        label_status_10->setText(QApplication::translate("MainWindow", "Not active", nullptr));
        label_ThreadID_10->setText(QApplication::translate("MainWindow", "Thread ID 10", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Complete tasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
