#include<QtWidgets/QApplication>
#include<QtWidgets/QFormLayout>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QLineEdit>
#include<QtWidgets/QSpinBox>
#include<QtWidgets/QComboBox>
#include<QtCore/QStringList>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QWidget *window = new QWidget;  //  would becomes main window.

  //  field widgets define
  QLineEdit *firstNameLineEdit = new QLineEdit;
  QLineEdit *lastNameLineEdit = new QLineEdit;

  QSpinBox *ageSpinBox = new QSpinBox;
  QComboBox *employmentStatusComboBox = new QComboBox;

  QStringList employmentStatus = {"Unemployed", "Employed", "NA"};

  //  --

  ageSpinBox->setRange(1, 100);
  employmentStatusComboBox->addItems(employmentStatus);

  QFormLayout *personalInfoformLayout = new QFormLayout;
  personalInfoformLayout->addRow("First Name:", firstNameLineEdit);
  personalInfoformLayout->addRow("Last Name:", lastNameLineEdit);
  personalInfoformLayout->addRow("Age", ageSpinBox);
  personalInfoformLayout->addRow("Employment Status", employmentStatusComboBox);

  window->setLayout(personalInfoformLayout);
  window->show();
  
  return QApplication::exec();
}
