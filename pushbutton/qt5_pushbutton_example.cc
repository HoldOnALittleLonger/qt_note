#include<QtWidgets/QApplication>
#include<QtWidgets/QPushButton>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QPushButton button(QIcon("filesaveas.png"), "Push Me");
  //  QIcon class gets the file and set it as an icon.
  //  "Push Me"" string as the text over pushbutton.

  button.setToolTip("Click this to turn back the hands of time");
  //  setToolTip() set tip for button.
  button.show();
  //  show() invoke means dont hide button,draw it on screen.
  //  if unspecified parent widget for a widget,then its parent widget
  //  would be setted to NULL.
  return QApplication::exec();
}
