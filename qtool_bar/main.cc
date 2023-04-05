#include"mainwindow.h"
#include<QtWidgets/QApplication>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  MainWindow mainwindow;  //  create a subclass object
  mainwindow.show();

  return QApplication::exec();
}
