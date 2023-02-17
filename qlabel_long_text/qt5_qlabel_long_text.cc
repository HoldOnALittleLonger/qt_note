#include<QtWidgets/QApplication>
#include<QtWidgets/QLabel>
#include<QtCore/QString>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QString message = "'What do you know about this business?' the King said to Alice.\n'Nothing.' said Alice";
  QLabel label(message);

  label.setFont(QFont("Comic Sans MS", 18));
  label.setAlignment(Qt::AlignCenter);
  label.show();
  return QApplication::exec();
}
