#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include <logindialog.h>
#include <QSqlDatabase>

namespace Ui {
class Database;
}

class Database : public QDialog
{
    Q_OBJECT

public:
    explicit Database(QWidget *parent = 0);
    ~Database();

private:
    Ui::Database *ui;
};

#endif // DATABASE_H
