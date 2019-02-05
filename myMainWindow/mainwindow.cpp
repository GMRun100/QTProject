#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QAction *openAction=new QAction(tr("Open"),this);
    QIcon icon(":/new/myImages/images/fileopen.PNG");

    openAction->setIcon(icon);
    openAction->setShortcut(QKeySequence(tr("CTRL+O")));
    ui->menuFile_F->addAction(openAction);

}

MainWindow::~MainWindow()
{
    delete ui;
}
