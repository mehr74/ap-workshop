#include "mainwindow.h"
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QTabWidget(parent)
{
    setMinimumSize(700, 500);
    myLibrary = new QWidget();
    myLibrarySearchEdt = new QLineEdit();
    myLibrarySearchBtn = new QPushButton("Search");
    myLibraryMainBtn = new QPushButton("Main Page");
    myLibraryBorrowBtn = new QPushButton("Borrow");
    myLibraryResTable = new QListWidget();
    myLibraryResTable->setResizeMode(QListView::Adjust);
    myLibraryResTable->setFlow(QListView::LeftToRight);
    myLibraryTable = new QTableWidget();
    myLibraryTable->setColumnCount(6);
    myLibraryTable->setHorizontalHeaderLabels(
                QStringList() << "id" << "Title" << "Authors" << "Release year"
                              << "Popularity" << "Category");
    myLibraryTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    myLibraryTable->verticalHeader()->hide();
    myLibraryTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    myLibraryTable->setSelectionBehavior(QAbstractItemView::SelectRows);


    QHBoxLayout* libraryToolBarLayout = new QHBoxLayout;
    libraryToolBarLayout->addWidget(myLibraryMainBtn);
    libraryToolBarLayout->addStretch(1);
    libraryToolBarLayout->addWidget(myLibrarySearchEdt);
    libraryToolBarLayout->addWidget(myLibrarySearchBtn);

    QHBoxLayout* libraryBorrowLayout = new QHBoxLayout;
    libraryBorrowLayout->addStretch(1);
    libraryBorrowLayout->addWidget(myLibraryBorrowBtn);

    QVBoxLayout* libraryLayout = new QVBoxLayout;
    libraryLayout->addLayout(libraryToolBarLayout);
    libraryLayout->addWidget(myLibraryResTable);
    libraryLayout->addLayout(libraryBorrowLayout);
    libraryLayout->addWidget(myLibraryTable);

    myLibrary->setLayout(libraryLayout);

    addTab(myLibrary, "Library");



}

MainWindow::~MainWindow()
{

}
