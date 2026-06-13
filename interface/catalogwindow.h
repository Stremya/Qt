#ifndef CATALOGWINDOW_H
#define CATALOGWINDOW_H

#include <QMainWindow>
#include "OrderWindow.h"

namespace Ui { class CatalogWindow; }

class CatalogWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CatalogWindow(QWidget *parent = nullptr);
    ~CatalogWindow();

private slots:
    void on_btnOrder_clicked();

private:
    Ui::CatalogWindow *ui;
    OrderWindow *orderWindow;
};

#endif // CATALOGWINDOW_H