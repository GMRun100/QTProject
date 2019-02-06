/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(540, 399);
        label = new QLabel(myWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 54, 12));
        label_2 = new QLabel(myWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 54, 12));
        label_3 = new QLabel(myWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(23, 170, 81, 20));
        label_4 = new QLabel(myWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 91, 20));
        pushButton = new QPushButton(myWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 80, 75, 23));
        checkBox = new QCheckBox(myWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(120, 120, 71, 16));
        lineEdit = new QLineEdit(myWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 170, 113, 20));
        spinBox = new QSpinBox(myWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(120, 220, 131, 22));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(pushButton);
        label_2->setBuddy(checkBox);
        label_3->setBuddy(lineEdit);
        label_4->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", Q_NULLPTR));
        label->setText(QApplication::translate("myWidget", "&Button", Q_NULLPTR));
        label_2->setText(QApplication::translate("myWidget", "&Checkbox", Q_NULLPTR));
        label_3->setText(QApplication::translate("myWidget", "\350\241\214\347\274\226\350\276\221\345\231\250\357\274\210&L\357\274\211", Q_NULLPTR));
        label_4->setText(QApplication::translate("myWidget", "\346\225\260\345\255\227\351\200\211\346\213\251\346\241\206(&N)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("myWidget", "PushButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("myWidget", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
