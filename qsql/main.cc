#include<QtWidgets/QApplication>
#include<QtSql/QtSql>
#include<QtCore/QDebug>
#include<QtWidgets/QLabel>
#include<QtCore/QString>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QSqlDatabase db_connection = QSqlDatabase::addDatabase("QSQLITE", "MyData");
  db_connection.setHostName("127.0.0.1");
  db_connection.setDatabaseName("MyData");
  db_connection.setUserName("root");
  db_connection.setPassword("");
  db_connection.setPort(3306);
  if (!db_connection.open()) {
    QString error_string("Failed to connecting");
    QLabel *label = new QLabel(error_string);
    label->show();
  } else {
    QString message("Database connection established!");
    QLabel *label = new QLabel(message);
    label->show();
  }
  return QApplication::exec();
}
