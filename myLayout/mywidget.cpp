#include "mywidget.h"
#include "ui_mywidget.h"
#include<QHBoxLayout>
#include<QGridLayout>
myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    //practice use QHBoxLayout
//    QHBoxLayout *layout=new QHBoxLayout;
//    layout->addWidget(ui->fontComboBox);
//    layout->addWidget(ui->textEdit);
//    layout->setSpacing(50);
//    layout->setContentsMargins(0,0,0,0);   //设置布局管理器到边界的距离，左，上，右，下
//    setLayout(layout);

    //practice use QGridLayout
//    QGridLayout *gridlayout=new QGridLayout;
//    //添加部件，从第0行0列开始，占据1行2列
//    gridlayout->addWidget(ui->fontComboBox,0,0,1,2);
//    //添加部件，从第0行2列开始，占据1行2列
//    gridlayout->addWidget(ui->pushButton,0,2,1,1);
//    //添加部件，从第1行0列开始，占据1行3列
//    gridlayout->addWidget(ui->textEdit,1,0,1,3);

//    setLayout(gridlayout);

    ui->textEdit->hide();

}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_pushButton_toggled(bool checked)
{
    ui->textEdit->setVisible(checked);
    if(checked)
    {
        ui->pushButton->setText(tr("hide"));
    }
    else
    {
        ui->pushButton->setText(tr("show"));
    }
}
