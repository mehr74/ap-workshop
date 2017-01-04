#include "loginwindow.h"
#include <QLayout>

namespace MagicLib
{

LoginWindow::LoginWindow()
{
    myLoginLbl = new QLabel("Login:");
    myPassLbl = new QLabel("Password:");


    myLoginEdt = new QLineEdit();
    myLoginEdt->setMaxLength(45);

    myPassEdt = new QLineEdit();
    myPassEdt->setMaxLength(45);
    myPassEdt->setEchoMode(QLineEdit::Password);

    myLoginBtn = new QPushButton("sign in");

    QVBoxLayout* loginLayout = new QVBoxLayout;
    loginLayout->addWidget(myLoginLbl);
    loginLayout->addWidget(myLoginEdt);
    loginLayout->addWidget(myPassLbl);
    loginLayout->addWidget(myPassEdt);
    loginLayout->addWidget(myLoginBtn);

    this->setLayout(loginLayout);

}

}

