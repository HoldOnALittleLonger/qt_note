#include<QtWidgets/QApplication>
#include<QtWidgets/QPushButton>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QPushButton *qbutton = new QPushButton("Quit");
  
  QObject::connect(qbutton, SIGNAL(clicked()), &app, SLOT(quit()));

  qbutton->show();
  return QApplication::exec();
}
