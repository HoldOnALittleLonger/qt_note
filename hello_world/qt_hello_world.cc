#include<QtWidgets/QApplication>
#include<QtWidgets/QLabel>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QLabel label("Hello World!");
  label.show();
  return QApplication::exec();
}
