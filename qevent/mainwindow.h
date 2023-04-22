#pragma once

#include<QtWidgets/QMainWindow>
#include<QtGui/QMoveEvent>
#include<QtWidgets/QApplication>
#include<QtCore/QString>
#include<QtWidgets/QStatusBar>

class MainWindow : public QMainWindow {
  Q_OBJECT
public:
  MainWindow(QWidget *parent = NULL);
protected:
  void moveEvent(QMoveEvent *event);
};
