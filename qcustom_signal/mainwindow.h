#pragma once

#include<QtWidgets/QMainWindow>
#include<QtGui/QMoveEvent>
#include<QtGui/QMouseEvent>
#include<QtWidgets/QVBoxLayout>
#include<QtCore/QDebug>
#include<QtCore/QDateTime>
#include<QtWidgets/QStatusBar>
#include<QtWidgets/QLabel>

class MainWindow : public QMainWindow {
  Q_OBJECT
public slots:
  void updateMousePosition(QPoint pos);
signals: void mouseMoved(QPoint pos);  //  signature signal function.

public:
  MainWindow(QWidget *parent = nullptr);

protected:
  void mousePressEvent(QMouseEvent *event) override;

private:
  QLabel *mousePosition;
  QWidget *windowCentralWidget;
};
