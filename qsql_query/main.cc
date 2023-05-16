#include<QtSql/QtSql>
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlRecord>
#include<QtCore/QString>
#include<QtCore/QDebug>

int main(int argc, char *argv[])
{
  QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", "MyData");
  db.setHostName("127.0.0.1");
  db.setPort(3306);
  db.setUserName("root");
  db.setPassword("");

  if (db.open()) {
    qDebug()<<"established connection";
  }
  else {
    qDebug()<<db.lastError();
    return 1;
  }

  QSqlQuery db_operator(db);
  db_operator.exec("SELECT * FROM QtSqlTable");

  qDebug()<<db_operator.lastError();

  do {
    qDebug()<<"............";

    qDebug()<<db_operator.value("id").toString();
    qDebug()<<db_operator.value("last_name").toString();
    qDebug()<<db_operator.value("first_name").toString();

    qDebug()<<"............";
  } while (db_operator.next());

  return 0;
}
