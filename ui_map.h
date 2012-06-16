/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created: Wed 21. Dec 13:07:00 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    QAction *actionOpen;
    QAction *actionHelp;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionAbout_QT;
    QAction *actionOpen_2;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QMenu *menuOpen_bd;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName(QString::fromUtf8("map"));
        map->resize(982, 551);
        actionOpen = new QAction(map);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionHelp = new QAction(map);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionSave = new QAction(map);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(map);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(map);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_QT = new QAction(map);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        actionOpen_2 = new QAction(map);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        centralWidget = new QWidget(map);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setBaseSize(QSize(350, 350));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalWidget = new QWidget(centralWidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(700, 500));
        verticalWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        horizontalLayout->addWidget(verticalWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMaximumSize(QSize(16777215, 200));
        tableView->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(tableView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        map->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(map);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 982, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOpen_bd = new QMenu(menuBar);
        menuOpen_bd->setObjectName(QString::fromUtf8("menuOpen_bd"));
        map->setMenuBar(menuBar);
        mainToolBar = new QToolBar(map);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        map->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuOpen_bd->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_QT);
        menuOpen_bd->addAction(actionOpen_2);

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QMainWindow *map)
    {
        map->setWindowTitle(QApplication::translate("map", "map", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("map", "\320\276\321\202\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("map", "help", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("map", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("map", "\320\262\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("map", "\320\276 \320\275\320\260\321\201", 0, QApplication::UnicodeUTF8));
        actionAbout_QT->setText(QApplication::translate("map", "\320\276 \320\277\321\200\320\276\320\265\320\272\321\202\320\265", 0, QApplication::UnicodeUTF8));
        actionOpen_2->setText(QApplication::translate("map", "\320\276\321\202\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("map", "\320\222\320\262\320\276\320\264 ID", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("map", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("map", "\320\243\320\273\320\270\321\206\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("map", "\320\230\320\274\321\217", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("map", "x", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("map", "y", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("map", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\265\321\202\320\272\321\203", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("map", "\321\204\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("map", "\320\276\320\277\321\206\320\270\320\270", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("map", "\320\277\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
        menuOpen_bd->setTitle(QApplication::translate("map", "\320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\221\320\224", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
