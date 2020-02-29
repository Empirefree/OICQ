/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *usrTblWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *usrNumLbl;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitBtn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msgBrowser;
    QTextEdit *msgTxtEdit;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *sendTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->setEnabled(true);
        Widget->resize(809, 451);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(16777215, 16777215));
        Widget->setStyleSheet(QStringLiteral("border-image: url(:/images/register.png);"));
        usrTblWidget = new QTableWidget(Widget);
        if (usrTblWidget->columnCount() < 2)
            usrTblWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        usrTblWidget->setObjectName(QStringLiteral("usrTblWidget"));
        usrTblWidget->setGeometry(QRect(540, 0, 271, 411));
        usrTblWidget->setStyleSheet(QStringLiteral("border-image: url(:/images/register.png);"));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        usrTblWidget->setShowGrid(false);
        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 410, 811, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        usrNumLbl = new QLabel(horizontalLayoutWidget_2);
        usrNumLbl->setObjectName(QStringLiteral("usrNumLbl"));

        horizontalLayout_2->addWidget(usrNumLbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sendBtn = new QPushButton(horizontalLayoutWidget_2);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_2->addWidget(sendBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        exitBtn = new QPushButton(horizontalLayoutWidget_2);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_2->addWidget(exitBtn);

        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 541, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(verticalLayoutWidget);
        msgBrowser->setObjectName(QStringLiteral("msgBrowser"));

        verticalLayout->addWidget(msgBrowser);

        msgTxtEdit = new QTextEdit(Widget);
        msgTxtEdit->setObjectName(QStringLiteral("msgTxtEdit"));
        msgTxtEdit->setGeometry(QRect(0, 290, 541, 121));
        fontCbx = new QFontComboBox(Widget);
        fontCbx->setObjectName(QStringLiteral("fontCbx"));
        fontCbx->setGeometry(QRect(0, 260, 191, 17));
        sizeCbx = new QComboBox(Widget);
        sizeCbx->setObjectName(QStringLiteral("sizeCbx"));
        sizeCbx->setGeometry(QRect(190, 260, 51, 21));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(240, 250, 301, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        boldTBtn = new QToolButton(widget);
        boldTBtn->setObjectName(QStringLiteral("boldTBtn"));
        boldTBtn->setMinimumSize(QSize(33, 32));
        boldTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setIconSize(QSize(26, 26));
        boldTBtn->setCheckable(true);
        boldTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(boldTBtn);

        italicTBtn = new QToolButton(widget);
        italicTBtn->setObjectName(QStringLiteral("italicTBtn"));
        italicTBtn->setMinimumSize(QSize(33, 32));
        italicTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setIconSize(QSize(26, 26));
        italicTBtn->setCheckable(true);
        italicTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(italicTBtn);

        underlineTBtn = new QToolButton(widget);
        underlineTBtn->setObjectName(QStringLiteral("underlineTBtn"));
        underlineTBtn->setMinimumSize(QSize(33, 32));
        underlineTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setIconSize(QSize(26, 26));
        underlineTBtn->setCheckable(true);
        underlineTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(underlineTBtn);

        colorTBtn = new QToolButton(widget);
        colorTBtn->setObjectName(QStringLiteral("colorTBtn"));
        colorTBtn->setMinimumSize(QSize(33, 32));
        colorTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon3);
        colorTBtn->setIconSize(QSize(26, 26));
        colorTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(colorTBtn);

        sendTBtn = new QToolButton(widget);
        sendTBtn->setObjectName(QStringLiteral("sendTBtn"));
        sendTBtn->setMinimumSize(QSize(33, 32));
        sendTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendTBtn->setIcon(icon4);
        sendTBtn->setIconSize(QSize(26, 26));
        sendTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(sendTBtn);

        saveTBtn = new QToolButton(widget);
        saveTBtn->setObjectName(QStringLiteral("saveTBtn"));
        saveTBtn->setMinimumSize(QSize(33, 32));
        saveTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon5);
        saveTBtn->setIconSize(QSize(26, 26));
        saveTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(saveTBtn);

        clearTBtn = new QToolButton(widget);
        clearTBtn->setObjectName(QStringLiteral("clearTBtn"));
        clearTBtn->setMinimumSize(QSize(33, 32));
        clearTBtn->setMaximumSize(QSize(33, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon6);
        clearTBtn->setIconSize(QSize(26, 26));
        clearTBtn->setAutoRaise(true);

        horizontalLayout->addWidget(clearTBtn);


        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = usrTblWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "IP\345\234\260\345\235\200", Q_NULLPTR));
        usrNumLbl->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        msgBrowser->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sizeCbx->clear();
        sizeCbx->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", Q_NULLPTR)
         << QApplication::translate("Widget", "9", Q_NULLPTR)
         << QApplication::translate("Widget", "10", Q_NULLPTR)
         << QApplication::translate("Widget", "11", Q_NULLPTR)
         << QApplication::translate("Widget", "12", Q_NULLPTR)
         << QApplication::translate("Widget", "13", Q_NULLPTR)
         << QApplication::translate("Widget", "14", Q_NULLPTR)
         << QApplication::translate("Widget", "15", Q_NULLPTR)
         << QApplication::translate("Widget", "16", Q_NULLPTR)
         << QApplication::translate("Widget", "17", Q_NULLPTR)
         << QApplication::translate("Widget", "18", Q_NULLPTR)
         << QApplication::translate("Widget", "19", Q_NULLPTR)
         << QApplication::translate("Widget", "20", Q_NULLPTR)
         << QApplication::translate("Widget", "21", Q_NULLPTR)
         << QApplication::translate("Widget", "22", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        boldTBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        boldTBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        italicTBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        italicTBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        underlineTBtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        underlineTBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        colorTBtn->setToolTip(QApplication::translate("Widget", "\346\233\264\346\224\271\345\255\227\344\275\223\351\242\234\350\211\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        colorTBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        sendTBtn->setToolTip(QApplication::translate("Widget", "\344\274\240\350\276\223\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sendTBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveTBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveTBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        clearTBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearTBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
