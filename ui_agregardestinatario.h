/********************************************************************************
** Form generated from reading UI file 'agregardestinatario.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARDESTINATARIO_H
#define UI_AGREGARDESTINATARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregardestinatario
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *agregardestinatario)
    {
        if (agregardestinatario->objectName().isEmpty())
            agregardestinatario->setObjectName(QStringLiteral("agregardestinatario"));
        agregardestinatario->resize(800, 600);
        menubar = new QMenuBar(agregardestinatario);
        menubar->setObjectName(QStringLiteral("menubar"));
        agregardestinatario->setMenuBar(menubar);
        centralwidget = new QWidget(agregardestinatario);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        agregardestinatario->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(agregardestinatario);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        agregardestinatario->setStatusBar(statusbar);

        retranslateUi(agregardestinatario);

        QMetaObject::connectSlotsByName(agregardestinatario);
    } // setupUi

    void retranslateUi(QMainWindow *agregardestinatario)
    {
        agregardestinatario->setWindowTitle(QApplication::translate("agregardestinatario", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class agregardestinatario: public Ui_agregardestinatario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARDESTINATARIO_H
