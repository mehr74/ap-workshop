#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>


namespace MagicLib
{

class LoginWindow : public QDialog
{
public:
    LoginWindow();

private:
    QLabel* myLoginLbl;
    QLabel* myPassLbl;

    QLineEdit* myLoginEdt;
    QLineEdit* myPassEdt;

    QPushButton* myLoginBtn;

    QWidget* myLoginWidget;

};
}

#endif // LOGINWINDOW_H
