#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>


namespace MagicLib
{

class LoginWindow : public QDialog
{
    Q_OBJECT
public:

    LoginWindow();
    ~LoginWindow(){}

private slots:
    void transformToLoginForm();
    void transformToRegisterForm();
    void showSetting();
    void loginUser();

private:

    QLabel* myLoginLbl;
    QLabel* myPassLbl;
    QLabel* myRegisterLbl;
    QLabel* myDataBaseNameLbl;
    QLabel* myHostNameLbl;
    QLabel* myHostPortLbl;
    QLabel* myRegLoginLbl;
    QLabel* myRegEmailLbl;
    QLabel* myRegNameLbl;
    QLabel* myRegPassLbl;
    QLabel* myRegRepPassLbl;
    QLabel* myRegTypeLbl;

    QLineEdit* myLoginEdt;
    QLineEdit* myPassEdt;
    QLineEdit* myDataBaseNameEdt;
    QLineEdit* myHostNameEdt;
    QLineEdit* myHostPortEdt;
    QLineEdit* myRegLoginEdt;
    QLineEdit* myRegEmailEdt;
    QLineEdit* myRegNameEdt;
    QLineEdit* myRegPassEdt;
    QLineEdit* myRegRepPassEdt;

    QPushButton* myLoginBtn;
    QPushButton* myRegisterBtn;
    QPushButton* mySettingBtn;
    QPushButton* myRegOkBtn;
    QPushButton* myRegBackBtn;

    QWidget* myLoginWidget;
    QWidget* mySettingWidget;
    QWidget* myRegisterWidget;

    QComboBox* myRegTypeCmb;

};
}

#endif // LOGINWINDOW_H
