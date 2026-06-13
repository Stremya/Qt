#include "CatalogWindow.h"
#include "ui_CatalogWindow.h"

CatalogWindow::CatalogWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CatalogWindow)
{
    ui->setupUi(this);
    orderWindow = nullptr;
}

CatalogWindow::~CatalogWindow()
{
    delete ui;
}

void CatalogWindow::on_btnOrder_clicked()
{
    if (!orderWindow) {
        orderWindow = new OrderWindow(this);
    }
    orderWindow->show();
    this->hide();
}