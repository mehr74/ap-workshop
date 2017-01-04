#include "loginwindow.h"
#include <QLayout>
#include <QFont>

namespace MagicLib
{

LoginWindow::LoginWindow()
{

    setWindowTitle("Login Window");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    // Create QLabels...
    myLoginLbl = new QLabel("Login:");
    myPassLbl = new QLabel("Password:");
    myRegisterLbl = new QLabel("<hr/>Haven't account yet?<br/>Click below to register");
    myRegisterLbl->setAlignment(Qt::AlignCenter);
    myDataBaseNameLbl = new QLabel("Database name:");
    myHostNameLbl = new QLabel("Host");
    myHostPortLbl = new QLabel("Port:");
    myRegLoginLbl = new QLabel("Login");
    myRegNameLbl = new QLabel("Your real name and surname");
    myRegEmailLbl = new QLabel("E-mail");
    myRegPassLbl = new QLabel("Password");
    myRegRepPassLbl = new QLabel("Repeat you password:");
    myRegTypeLbl = new QLabel("Membership type:");

    // Create QLineEdits...
    myLoginEdt = new QLineEdit();
    myLoginEdt->setMaxLength(45);
    myPassEdt = new QLineEdit();
    myPassEdt->setMaxLength(45);
    myPassEdt->setEchoMode(QLineEdit::Password);
    myDataBaseNameEdt = new QLineEdit("Bookstore");
    myHostNameEdt = new QLineEdit("localhost");
    myHostPortEdt = new QLineEdit("3036");
    myRegLoginEdt = new QLineEdit();
    myRegLoginEdt->setMaxLength(45);
    myRegEmailEdt = new QLineEdit();
    myRegEmailEdt->setMaxLength(45);
    myRegNameEdt = new QLineEdit();
    myRegNameEdt->setMaxLength(45);
    myRegPassEdt = new QLineEdit();
    myRegPassEdt->setMaxLength(45);
    myRegPassEdt->setEchoMode(QLineEdit::Password);
    myRegRepPassEdt = new QLineEdit();
    myRegRepPassEdt->setMaxLength(45);
    myRegRepPassEdt->setEchoMode(QLineEdit::Password);


    // Create QPushButtons...
    myLoginBtn = new QPushButton("Sign in");
    myRegisterBtn = new QPushButton("Sign up");
    mySettingBtn = new QPushButton("Advaned Settings");
    myRegOkBtn = new QPushButton("Ok");
    myRegBackBtn = new QPushButton("Back");

    // Create QComboBox
    myRegTypeCmb = new QComboBox();
    QStringList userTypes = (QStringList() << "Member" << "Librarian");
    myRegTypeCmb->addItems(userTypes);


    // Login widget
    QVBoxLayout* loginLayout = new QVBoxLayout;
    loginLayout->setContentsMargins(0, 0, 0, 10);
    loginLayout->addWidget(myLoginLbl);
    loginLayout->addWidget(myLoginEdt);
    loginLayout->addWidget(myPassLbl);
    loginLayout->addWidget(myPassEdt);
    loginLayout->addWidget(myLoginBtn);
    loginLayout->addWidget(myRegisterLbl);
    loginLayout->addWidget(myRegisterBtn);
    loginLayout->addWidget(mySettingBtn);
    myLoginWidget = new QWidget;
    myLoginWidget->setLayout(loginLayout);

    // Setting widget
    QVBoxLayout* settingLayout = new QVBoxLayout;
    settingLayout->setContentsMargins(0, 0, 0, 10);
    settingLayout->addWidget(myHostNameLbl);
    settingLayout->addWidget(myHostNameEdt);
    settingLayout->addWidget(myHostPortLbl);
    settingLayout->addWidget(myHostPortEdt);
    mySettingWidget = new QWidget;
    mySettingWidget->setLayout(settingLayout);

    // Registration widget
    QVBoxLayout* registerLayout = new QVBoxLayout;
    registerLayout->setContentsMargins(0, 0, 0, 10);
    registerLayout->addWidget(myRegLoginLbl);
    registerLayout->addWidget(myRegLoginEdt);
    registerLayout->addWidget(myRegEmailLbl);
    registerLayout->addWidget(myRegEmailEdt);
    registerLayout->addWidget(myRegPassLbl);
    registerLayout->addWidget(myRegPassEdt);
    registerLayout->addWidget(myRegRepPassLbl);
    registerLayout->addWidget(myRegRepPassEdt);
    registerLayout->addWidget(myRegTypeLbl);
    registerLayout->addWidget(myRegTypeCmb);
    registerLayout->addWidget(myRegOkBtn);
    registerLayout->addWidget(myRegBackBtn);
    myRegisterWidget = new QWidget;
    myRegisterWidget->setLayout(registerLayout);

    // Create Layouts...
    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(myLoginWidget);
    mainLayout->addWidget(mySettingWidget);
    mainLayout->addWidget(myRegisterWidget);


    transformToLoginForm();

    connect(myRegisterBtn, SIGNAL(clicked(bool)),
            this, SLOT(transformToRegisterForm()));
    connect(myRegBackBtn, SIGNAL(clicked(bool)), this, SLOT(transformToLoginForm()));
    connect(mySettingBtn, SIGNAL(clicked(bool)), this, SLOT(showSetting()));
    connect(myLoginBtn, SIGNAL(clicked(bool)), this, SLOT(loginUser()));


    mySettingWidget->hide();

    this->setLayout(mainLayout);
    adjustSize();

}

void LoginWindow::transformToLoginForm()
{
    myRegisterWidget->hide();
    myLoginWidget->show();
    adjustSize();

}

void LoginWindow::transformToRegisterForm()
{
    myRegisterWidget->show();
    myLoginWidget->hide();
    mySettingWidget->hide();

}

void LoginWindow::showSetting()
{
    if(mySettingWidget->isVisible())
    {
        mySettingWidget->hide();
        adjustSize();
    }
    else
    {
        mySettingWidget->show();
        adjustSize();
    }
}

void LoginWindow::loginUser()
{
}

}

