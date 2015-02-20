#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent* event);

public:
    MainWindow();
    ~MainWindow();

private:
    QTabWidget* TabWidget;
    QTreeView* TreeWidget;
    QDockWidget* FileView;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
