#include"mainwindow.h"

MainWindow::MainWindow()
{
  //  MainWindow is public inherit QMainWindow,and
  //  QMainWindow is public inherit from QWidget

  setWindowTitle("Main Window");  //  set title
  resize(400, 700);

  QLabel *mainLabel = new QLabel("Main Widget");

  setCentralWidget(mainLabel);  //  let mainLabel become the central widget
  mainLabel->setAlignment(Qt::AlignCenter);
}
