#include "OrderWindow.h"
#include "ui_OrderWindow.h"
#include "MainWindow.h"

OrderWindow::OrderWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OrderWindow)
{
    ui->setupUi(this);
}

OrderWindow::~OrderWindow()
{
    delete ui;
}

void OrderWindow::on_btnConfirmOrder_clicked()
{
    // Return to main window
    MainWindow *mainWin = new MainWindow();
    mainWin->show();
    this->close();
}