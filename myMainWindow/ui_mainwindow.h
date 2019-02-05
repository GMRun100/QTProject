/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionopen;
    QAction *actionClose_C;
    QAction *actionSave_S;
    QAction *actionsaveas_A;
    QAction *actionExit_X;
    QAction *actionCancel_Z;
    QAction *actionCut_X;
    QAction *actionCopy_C;
    QAction *actionPaste_V;
    QAction *actionFind_F;
    QAction *actionhelp;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menu_E;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(626, 371);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/myImages/images/filenew.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_N->setIcon(icon);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/myImages/images/fileopen.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon1);
        actionClose_C = new QAction(MainWindow);
        actionClose_C->setObjectName(QStringLiteral("actionClose_C"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/myImages/images/window-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_C->setIcon(icon2);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/myImages/images/filesave.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_S->setIcon(icon3);
        actionsaveas_A = new QAction(MainWindow);
        actionsaveas_A->setObjectName(QStringLiteral("actionsaveas_A"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/myImages/images/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionsaveas_A->setIcon(icon4);
        actionExit_X = new QAction(MainWindow);
        actionExit_X->setObjectName(QStringLiteral("actionExit_X"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/myImages/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit_X->setIcon(icon5);
        actionCancel_Z = new QAction(MainWindow);
        actionCancel_Z->setObjectName(QStringLiteral("actionCancel_Z"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/myImages/images/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCancel_Z->setIcon(icon6);
        actionCut_X = new QAction(MainWindow);
        actionCut_X->setObjectName(QStringLiteral("actionCut_X"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/myImages/images/edit-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_X->setIcon(icon7);
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/myImages/images/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon8);
        actionPaste_V = new QAction(MainWindow);
        actionPaste_V->setObjectName(QStringLiteral("actionPaste_V"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/myImages/images/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_V->setIcon(icon9);
        actionFind_F = new QAction(MainWindow);
        actionFind_F->setObjectName(QStringLiteral("actionFind_F"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/myImages/images/filefind.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind_F->setIcon(icon10);
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QStringLiteral("actionhelp"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/myImages/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionhelp->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 191, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 626, 23));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menuFile_F->addAction(actionNew_N);
        menuFile_F->addAction(actionopen);
        menuFile_F->addAction(actionClose_C);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionsaveas_A);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionExit_X);
        menu_E->addAction(actionCancel_Z);
        menu_E->addSeparator();
        menu_E->addAction(actionCut_X);
        menu_E->addAction(actionCopy_C);
        menu_E->addAction(actionPaste_V);
        menu_E->addSeparator();
        menu_E->addAction(actionFind_F);
        menu_H->addAction(actionhelp);
        mainToolBar->addAction(actionNew_N);
        mainToolBar->addAction(actionopen);
        mainToolBar->addAction(actionSave_S);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCancel_Z);
        mainToolBar->addAction(actionCut_X);
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_V);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind_F);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew_N->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew_N->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionNew_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        actionopen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionopen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200(O)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionopen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionClose_C->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClose_C->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255(C)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionClose_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        actionSave_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave_S->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230(S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionsaveas_A->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionsaveas_A->setToolTip(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionsaveas_A->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
        actionExit_X->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExit_X->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272(X)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExit_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        actionCancel_Z->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&Z)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCancel_Z->setToolTip(QApplication::translate("MainWindow", "\346\222\244\351\224\200(Z)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCancel_Z->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
        actionCut_X->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&X)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCut_X->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207(X)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCut_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        actionCopy_C->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy_C->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266(C)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        actionPaste_V->setText(QApplication::translate("MainWindow", "\351\273\217\350\264\264(&V)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste_V->setToolTip(QApplication::translate("MainWindow", "\351\273\217\350\264\264(V)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPaste_V->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
        actionFind_F->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFind_F->setToolTip(QApplication::translate("MainWindow", "\346\237\245\346\211\276(F)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFind_F->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
        actionhelp->setText(QApplication::translate("MainWindow", "\347\211\210\346\234\254\350\257\264\346\230\216(&H)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionhelp->setToolTip(QApplication::translate("MainWindow", "\347\211\210\346\234\254\350\257\264\346\230\216(H)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionhelp->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "age:", Q_NULLPTR));
        menuFile_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
