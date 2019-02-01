#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon icon;
    icon.addFile("Circlebowl.ico");
    this->setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
    delete ui;
}
