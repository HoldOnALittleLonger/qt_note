#pragma once

#include<QtWidgets/QMainWindow>
#include<QtWidgets/QLabel>
#include<QtGui/QMoveEvent>
#include<QtGui/QMouseEvent>
#include<QtWidgets/QVBoxLayout>
#include<QtCore/QDebug>
#include<QtCore/QDateTime>
#include<QtWidgets/QStatusBar>
#include"dragTextEdit.h"

class MainWindow : public QMainWindow {
  Q_OBJECT
public:
  MainWindow(QWidget *parent = nullptr);

private slots:
  void updateStatusBar();

private:
  DragTextEdit *slateDragTextEdit;

};
