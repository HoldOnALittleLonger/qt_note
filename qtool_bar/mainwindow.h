#pragma once

#include<QtWidgets/QMainWindow>
#include<QtWidgets/QApplication>
#include<QtWidgets/QAction>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QMenuBar>
#include<QtGui/QtGui>
#include<QtCore/Qt>

#include<QtWidgets/QToolBar>
#include<QtWidgets/QTableView>

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow();

private slots:
  
private:
  QMenu *fileMenu;
  QMenu *helpMenu;

  QAction *quitAction;
  QAction *aboutAction;
  QAction *saveAction;
  QAction *cancelAction;
  QAction *openAction;
  QAction *newAction;
  QAction *aboutQtAction;
  
  QToolBar *toolbar;

  QAction *newToolBarAction;
  QAction *openToolBarAction;
  QAction *closeToolBarAction;

};

