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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QLabel *aLabel;
    QSpinBox *aSpinBox;
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QFontComboBox *fontComboBox;
    QTextEdit *textEdit;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(500, 350);
        myWidget->setMinimumSize(QSize(200, 150));
        myWidget->setMaximumSize(QSize(500, 350));
        verticalLayout = new QVBoxLayout(myWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nLabel = new QLabel(myWidget);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(myWidget);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(myWidget);
        sLabel->setObjectName(QStringLiteral("sLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(myWidget);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sComboBox);

        aLabel = new QLabel(myWidget);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(myWidget);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, aSpinBox);

        mLabel = new QLabel(myWidget);
        mLabel->setObjectName(QStringLiteral("mLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLabel);

        mLineEdit = new QLineEdit(myWidget);
        mLineEdit->setObjectName(QStringLiteral("mLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mLineEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(myWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setCheckable(true);

        horizontalLayout->addWidget(pushButton);

        fontComboBox = new QFontComboBox(myWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(fontComboBox);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(myWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(textEdit);

        fontComboBox->raise();
        pushButton->raise();
        fontComboBox->raise();
        textEdit->raise();
#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
        mLabel->setBuddy(mLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", Q_NULLPTR));
        nLabel->setText(QApplication::translate("myWidget", "\345\247\223\345\220\215(&N)", Q_NULLPTR));
        sLabel->setText(QApplication::translate("myWidget", "\346\200\247\345\210\253(&S)", Q_NULLPTR));
        aLabel->setText(QApplication::translate("myWidget", "\345\271\264\351\276\204(&A)", Q_NULLPTR));
        mLabel->setText(QApplication::translate("myWidget", "\351\202\256\347\256\261\345\234\260\345\235\200(&M)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("myWidget", "\346\230\276\347\244\272\345\217\257\346\211\251\345\261\225\344\270\262\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
