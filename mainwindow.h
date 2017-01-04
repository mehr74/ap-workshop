#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTabWidget>
#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QTableWidget>
#include <QListWidget>
#include <QHeaderView>

class MainWindow : public QTabWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *myLibrary;

    QLineEdit* myLibrarySearchEdt;

    QPushButton *myLibrarySearchBtn;
    QPushButton *myLibraryBorrowBtn;
    QPushButton *myLibraryMainBtn;

    QListWidget *myLibraryResTable;

    QTableWidget *myLibraryTable;

};

#endif // MAINWINDOW_H
