/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *methodtype;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *inputx;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QLabel *myresult;
    QGroupBox *groupBox;
    QLabel *Clibresult;
    QHBoxLayout *horizontalLayout_4;
    QLabel *myspeed;
    QLabel *libspeed;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(470, 295);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 431, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        methodtype = new QComboBox(verticalLayoutWidget);
        methodtype->setObjectName(QStringLiteral("methodtype"));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setWeight(50);
        methodtype->setFont(font1);

        horizontalLayout->addWidget(methodtype);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        inputx = new QLineEdit(verticalLayoutWidget);
        inputx->setObjectName(QStringLiteral("inputx"));
        QFont font3;
        font3.setPointSize(15);
        inputx->setFont(font3);

        horizontalLayout_3->addWidget(inputx);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        groupBox_2->setFont(font4);
        groupBox_2->setAlignment(Qt::AlignCenter);
        myresult = new QLabel(groupBox_2);
        myresult->setObjectName(QStringLiteral("myresult"));
        myresult->setGeometry(QRect(30, 50, 151, 31));
        myresult->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setItalic(true);
        font5.setWeight(50);
        groupBox->setFont(font5);
        groupBox->setAlignment(Qt::AlignCenter);
        Clibresult = new QLabel(groupBox);
        Clibresult->setObjectName(QStringLiteral("Clibresult"));
        Clibresult->setGeometry(QRect(40, 50, 141, 31));
        Clibresult->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        myspeed = new QLabel(verticalLayoutWidget);
        myspeed->setObjectName(QStringLiteral("myspeed"));
        QFont font6;
        font6.setPointSize(11);
        myspeed->setFont(font6);
        myspeed->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(myspeed);

        libspeed = new QLabel(verticalLayoutWidget);
        libspeed->setObjectName(QStringLiteral("libspeed"));
        libspeed->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(libspeed);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Type of Solver", Q_NULLPTR));
        methodtype->clear();
        methodtype->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\272\247\346\225\260\351\200\274\350\277\221\346\263\225", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\270\270\345\276\256\345\210\206\346\226\271\347\250\213\346\263\225", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\276\256\345\260\217\345\242\236\351\207\217\346\263\225", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "Variable X", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "My Result", Q_NULLPTR));
        myresult->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "C++ Math Lib Result", Q_NULLPTR));
        Clibresult->setText(QString());
        myspeed->setText(QApplication::translate("MainWindow", "0 ms", Q_NULLPTR));
        libspeed->setText(QApplication::translate("MainWindow", "0 ms", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
