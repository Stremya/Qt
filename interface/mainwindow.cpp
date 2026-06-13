#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    catalogWindow = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCatalog_clicked()
{
    if (!catalogWindow) {
        catalogWindow = new CatalogWindow(this);
    }
    catalogWindow->show();
    this->hide();
}