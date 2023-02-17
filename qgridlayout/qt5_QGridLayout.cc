#include<QtWidgets/QApplication>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QGridLayout>
#include<QtWidgets/QLineEdit>
#include<QtWidgets/QDateTimeEdit>
#include<QtWidgets/QSpinBox>
#include<QtWidgets/QComboBox>
#include<QtWidgets/QLabel>
#include<QtCore/QStringList>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);  //  creat application
  QWidget *window = new QWidget;  //  creat a widget would as parent widget
  QLabel *nameLabel = new QLabel("Open Happiness");  //  QtWidget(QLabel)
  QLineEdit *firstNameLineEdit = new QLineEdit;  //  QtWidget(QLineEdit)
  QLineEdit *lastNameLineEdit = new QLineEdit;  //  QtWidget(QLineEdit)

  QSpinBox *ageSpinBox = new QSpinBox;  //  QtWidget(QSpinBox)
  ageSpinBox->setRange(1, 100);

  QComboBox *employmentStatusComboBox = new QComboBox;  //  QtWidget(QComboBox)

  QStringList employmentStatus = {"Unemployed", "Employed", "NA"};  //  QtCore(QStringList), data structure
  employmentStatusComboBox->addItems(employmentStatus);
  
  QGridLayout *layout = new QGridLayout;  //  QtWidget(QGridLayout)

  //  fill grid up with widgets
  layout->addWidget(nameLabel, 0, 0);  //  pos(0,0)
  layout->addWidget(firstNameLineEdit, 0, 1);  //  pos(0,1)
  layout->addWidget(lastNameLineEdit, 0, 2);  //  pos(0,2)
  layout->addWidget(ageSpinBox, 1, 0);  //  pos(1,0)
  layout->addWidget(employmentStatusComboBox, 1, 1, 1, 2);  //  pos(1,1, 1row, 2columns)

  //  set layout for main widget
  window->setLayout(layout);
  //  show main widget
  window->show();

  return QApplication::exec();
}
