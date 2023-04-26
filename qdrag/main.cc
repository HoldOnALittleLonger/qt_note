#include"mainwindow.h"
#include<QtWidgets/QApplication>
#include<QtCore/Qt>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  MainWindow window;
  window.setWindowTitle("Drag Text Edit");
  window.show();

  return QApplication::exec();
}
