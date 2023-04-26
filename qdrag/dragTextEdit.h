#pragma once

#include<QtGui/QMoveEvent>
#include<QtGui/QMouseEvent>
#include<QtCore/QDebug>
#include<QtCore/QDateTime>
#include<QtWidgets/QTextEdit>
#include<QtCore/QMimeData>
#include<QtCore/QMimeDatabase>
#include<QtCore/QMimeType>

class DragTextEdit : public QTextEdit {
  Q_OBJECT
public:
  explicit DragTextEdit(QWidget *parent = nullptr);

protected:
  void dragEnterEvent(QDragEnterEvent *event) override;
  void dragMoveEvent(QDragMoveEvent *event) override;
  void dragLeaveEvent(QDragLeaveEvent *event) override;
  void dropEvent(QDropEvent *event) override;
};
