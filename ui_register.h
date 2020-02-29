/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QLineEdit *passwd1LineEdit;
    QLineEdit *passwd2LineEdit;
    QLineEdit *emailLineEdit;
    QPushButton *pushButton;
    QPushButton *registerputton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(422, 327);
        Register->setStyleSheet(QStringLiteral("border-image: url(:/images/chat.png);"));
        verticalLayoutWidget = new QWidget(Register);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 20, 101, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        verticalLayout->addWidget(label_4);

        nameLineEdit = new QLineEdit(Register);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(160, 40, 169, 21));
        nameLineEdit->setStyleSheet(QStringLiteral("border-image: url(:/images/back.png);"));
        passwd1LineEdit = new QLineEdit(Register);
        passwd1LineEdit->setObjectName(QStringLiteral("passwd1LineEdit"));
        passwd1LineEdit->setGeometry(QRect(160, 110, 169, 21));
        passwd1LineEdit->setStyleSheet(QStringLiteral("border-image: url(:/images/back.png);"));
        passwd1LineEdit->setEchoMode(QLineEdit::Password);
        passwd2LineEdit = new QLineEdit(Register);
        passwd2LineEdit->setObjectName(QStringLiteral("passwd2LineEdit"));
        passwd2LineEdit->setGeometry(QRect(160, 170, 169, 21));
        passwd2LineEdit->setStyleSheet(QStringLiteral("border-image: url(:/images/back.png);"));
        passwd2LineEdit->setEchoMode(QLineEdit::Password);
        emailLineEdit = new QLineEdit(Register);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(160, 240, 169, 21));
        emailLineEdit->setStyleSheet(QStringLiteral("border-image: url(:/images/back.png);"));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 290, 93, 28));
        registerputton = new QPushButton(Register);
        registerputton->setObjectName(QStringLiteral("registerputton"));
        registerputton->setGeometry(QRect(250, 290, 93, 28));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "\350\264\246\345\217\267: ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201: ", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "\345\257\206\347\240\201: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "Email: ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Register", "\351\200\200\345\207\272", Q_NULLPTR));
        registerputton->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
