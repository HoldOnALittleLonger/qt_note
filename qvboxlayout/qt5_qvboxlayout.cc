#include<QtWidgets/QApplication>
#include<QtWidgets/QVBoxLayout>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QLabel>
#include<QtWidgets/QLineEdit>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);   //  application instance
  QWidget *window = new QWidget;  //  main window

  QLabel *label1 = new QLabel("Username");  //  text label
  QLabel *label2 = new QLabel("Password");  //  text label

  //  input box
  QLineEdit *usernameLineEdit = new QLineEdit;
  usernameLineEdit->setPlaceholderText("Enter your username");
  QLineEdit *passwordLineEdit = new QLineEdit;
  passwordLineEdit->setEchoMode(QLineEdit::Password);
  passwordLineEdit->setPlaceholderText("Enter your password");

  QPushButton *button1 = new QPushButton("&Login");
  QPushButton *button2 = new QPushButton("&Register");

  QVBoxLayout *layout = new QVBoxLayout;  //  qvboxlayout
  layout->addWidget(label1);              //  NO.1
  layout->addWidget(usernameLineEdit);    //  NO.2
  layout->addWidget(label2);              //  NO.3
  layout->addWidget(passwordLineEdit);    //  NO.4
  layout->addWidget(button1);             //  NO.5
  layout->addWidget(button2);             //  NO.6

  window->setLayout(layout);
  window->show();

  
  QApplication::exec();
}
