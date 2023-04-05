#include"mainwindow.h"

MainWindow::MainWindow()
{
  setWindowTitle("Form in Window");
  setFixedSize(500, 500);  //  after this method,the main windown cant resize

  QPixmap newIcon("new.png");
  QPixmap openIcon("open.png");
  QPixmap closeIcon("close.png");

  fileMenu = menuBar()->addMenu("&File");
  //  add a menu to the menu bar of current application

  quitAction = new QAction(closeIcon, "Quit", this);
  quitAction->setShortcuts(QKeySequence::Quit);

  newAction = new QAction(newIcon, "&New", this);
  newAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_C));

  openAction = new QAction(openIcon, "&New", this);
  openAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));

  fileMenu->addAction(newAction);
  fileMenu->addAction(openAction);
  fileMenu->addSeparator();
  fileMenu->addAction(quitAction);

  helpMenu = menuBar()->addMenu("Help");
  //  add a menu to menu bar of current application
  
  aboutAction = new QAction("About", this);
  aboutAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_H));

  helpMenu->addAction(aboutAction);

  toolbar = addToolBar("main toolbar");  //  add a tool bar to current application
  newToolBarAction = toolbar->addAction(QIcon(newIcon), "New File");
  openToolBarAction = toolbar->addAction(QIcon(openIcon), "OpenFile");
  //  invoke addAction() method inside QToolBar class
  toolbar->addSeparator();

  closeToolBarAction = toolbar->addAction(QIcon(closeIcon), "Quit Application");

  connect(quitAction, &QAction::triggered, this, &QApplication::quit);
  //  connect SLOT quitAction with this class object
  connect(closeToolBarAction, &QAction::triggered, this, &QApplication::quit);
  //  connect SLOT closeToolBarAction with this class object

}
