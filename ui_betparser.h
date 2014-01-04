/********************************************************************************
** Form generated from reading UI file 'betparser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BETPARSER_H
#define UI_BETPARSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_betParser
{
public:

    void setupUi(QWidget *betParser)
    {
        if (betParser->objectName().isEmpty())
            betParser->setObjectName(QString::fromUtf8("betParser"));
        betParser->resize(400, 300);

        retranslateUi(betParser);

        QMetaObject::connectSlotsByName(betParser);
    } // setupUi

    void retranslateUi(QWidget *betParser)
    {
        betParser->setWindowTitle(QApplication::translate("betParser", "betParser", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class betParser: public Ui_betParser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BETPARSER_H
