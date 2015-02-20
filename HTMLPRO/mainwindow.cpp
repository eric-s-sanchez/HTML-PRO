#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow()
{
    TabWidget = new QTabWidget;
    TreeWidget = new QTreeView;
    FileView = new QDockWidget;

    FileView->setWidget(TreeWidget);

    addDockWidget(Qt::RightDockWidgetArea, FileView);

    setCentralWidget(TabWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent* event){
    TabWidget->close();
    event->accept();
}
