#include<QtWidgets/QApplication>
#include<QtWidgets/QLabel>
#include<QtWidgets/QDial>
#include<QtWidgets/QLCDNumber>
#include<QtWidgets/QVBoxLayout>
#include<QtWidgets/QSlider>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QWidget *window = new QWidget;

  QVBoxLayout *layout = new QVBoxLayout;
  QDial *volumeDial = new QDial;
  QSlider *lengthSlider = new QSlider(Qt::Horizontal);
  QLCDNumber *volumeLCD = new QLCDNumber;

  volumeLCD->setPalette(Qt::red);

  lengthSlider->setTickPosition(QSlider::TicksAbove);
  lengthSlider->setTickInterval(10);
  lengthSlider->setSingleStep(1);
  lengthSlider->setMinimum(0);
  lengthSlider->setMaximum(100);

  volumeDial->setNotchesVisible(true);
  volumeDial->setMinimum(0);
  volumeDial->setMaximum(100);

  //  insert with top -> bottom
  layout->addWidget(volumeDial);
  layout->addWidget(lengthSlider);
  layout->addWidget(volumeLCD);

  //  connect signal of QDial object to slot of QLCDNumber
  QObject::connect(volumeDial, SIGNAL(valueChanged(int)), volumeLCD, SLOT(display(int)));
  //  connect signal of QSlider object to slot of QLCDNumber
  QObject::connect(lengthSlider, SIGNAL(valueChanged(int)), volumeLCD, SLOT(display(int)));

  window->setLayout(layout);
  window->show();

  return QApplication::exec();
}
