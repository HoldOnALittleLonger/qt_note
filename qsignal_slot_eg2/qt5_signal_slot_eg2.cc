#include<QtWidgets/QApplication>
#include<QtWidgets/QVBoxLayout>
#include<QtWidgets/QLabel>
#include<QtWidgets/QDial>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  
  QWidget *window = new QWidget;
  QVBoxLayout *layout = new QVBoxLayout;
  QLabel *volumeLabel = new QLabel("0");
  QDial *volumeDial = new QDial;

  layout->addWidget(volumeDial);
  layout->addWidget(volumeLabel);

  QObject::connect(volumeDial, SIGNAL(valueChanged(int)), volumeLabel, SLOT(setNum(int)));
  //  volumeLabel waiting signal for volumeDial. 
  
  window->setLayout(layout);
  window->show();

  return QApplication::exec();
}
