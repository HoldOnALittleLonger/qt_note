#pragma once

#include<QtWidgets/QMainWindow>
#include<QtWidgets/QApplication>
#include<QtWidgets/QLabel>
#include<QtWidgets/QLineEdit>
#include<QtCore/QDate>
#include<QtWidgets/QDateEdit>
#include<QtWidgets/QVBoxLayout>
#include<QtWidgets/QHBoxLayout>
#include<QtWidgets/QGridLayout>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QMessageBox>
#include<QtWidgets/QAction>
#include<QtWidgets/QMenuBar>
#include<QtWidgets/QMenu>
#include<QtGui/QtGui>
#include<QtCore/Qt>
#include<QtWidgets/QToolBar>
#include<QtWidgets/QTableView>
#include<QtWidgets/QHeaderView>
#include<QtWidgets/QInputDialog>
#include<QtGui/QStandardItemModel>

class MainWindow : public QMainWindow {
  Q_OBJECT
public:
  MainWindow();

private slots:
  void saveButtonClicked();
  void aboutDialog();
  void clearAllRecords();
  void deleteSavedRecord();

private:
  QWidget *mainWidget;
  QVBoxLayout *centralWidgetLayout;
  QGridLayout *formLayout;
  QHBoxLayout *buttonsLayout;
  QLabel *nameLabel;
  QLabel *dateOfBirthLabel;
  QLabel *phoneNumberLabel;
  QPushButton *newPushButton;
  QPushButton *savePushButton;
  QPushButton *clearPushButton;
  QLineEdit *nameLineEdit;
  QDateEdit *dateOfBirthEdit;
  QLineEdit *phoneNumberLineEdit;
  QTableView *appTable;
  QStandardItemModel *model;

  QMenu *fileMenu;
  QMenu *helpMenu;

  QAction *quitAction;
  QAction *aboutAction;
  QAction *saveAction;
  QAction *cancelAction;
  QAction *openAction;
  QAction *newAction;
  QAction *aboutQtAction;
  QAction *newToolBarAction;
  QAction *openToolBarAction;
  QAction *closeToolBarAction;
  QAction *clearToolBarAction;
  QAction *deleteOneEntryToolBarAction;

  QPixmap newIcon;
  QPixmap openIcon;
  QPixmap closeIcon;
  QPixmap clearIcon;
  QPixmap deleteIcon;

  QToolBar *toolbar;

  void clearFields();
  void createIcons();
  void createMenuBar();
  void createToolBar();
  void setupSignalsAndSlots();
  void setupCoreWidgets();


};
