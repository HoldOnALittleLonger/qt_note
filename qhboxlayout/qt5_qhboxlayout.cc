#include<QtWidgets/QApplication>
#include<QtWidgets/QLineEdit>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QHBoxLayout>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QWidget *window = new QWidget;

  QLineEdit *urlLineEdit = new QLineEdit;
  QPushButton *exportButton = new QPushButton("Export");
  
  urlLineEdit->setPlaceholderText("Enter Url to export. Eg, http://yourdomain.com/items");
  urlLineEdit->setFixedWidth(400);

  QHBoxLayout *layout = new QHBoxLayout;
  layout->addWidget(urlLineEdit);
  layout->addWidget(exportButton);

  window->setLayout(layout);
  window->show();

  return QApplication::exec();
}
