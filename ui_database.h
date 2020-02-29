/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Database
{
public:
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *Database)
    {
        if (Database->objectName().isEmpty())
            Database->setObjectName(QStringLiteral("Database"));
        Database->resize(460, 361);
        Database->setStyleSheet(QStringLiteral("border-image: url(:/images/data.png);"));
        tableView = new QTableView(Database);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 70, 361, 231));
        tableView->setStyleSheet(QStringLiteral("border-image: url(:/images/chat.png);"));
        label = new QLabel(Database);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 121, 31));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        retranslateUi(Database);

        QMetaObject::connectSlotsByName(Database);
    } // setupUi

    void retranslateUi(QDialog *Database)
    {
        Database->setWindowTitle(QApplication::translate("Database", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Database", "ODBC\346\225\260\346\215\256\345\272\223\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Database: public Ui_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
