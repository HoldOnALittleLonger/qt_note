#pragma once

#include<QtWidgets/QMainWindow>
#include<QtWidgets/QApplication>
#include<QtWidgets/QAction>
#include<QtGui/QtGui>
#include<QtWidgets/QMenuBar>
#include<QtWidgets/QMenu>
#include<QtCore/Qt>

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
};
