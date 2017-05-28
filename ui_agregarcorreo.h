/********************************************************************************
** Form generated from reading UI file 'agregarcorreo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARCORREO_H
#define UI_AGREGARCORREO_H

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

class Ui_AgregarCorreo
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AgregarCorreo)
    {
        if (AgregarCorreo->objectName().isEmpty())
            AgregarCorreo->setObjectName(QStringLiteral("AgregarCorreo"));
        AgregarCorreo->resize(800, 600);
        menubar = new QMenuBar(AgregarCorreo);
        menubar->setObjectName(QStringLiteral("menubar"));
        AgregarCorreo->setMenuBar(menubar);
        centralwidget = new QWidget(AgregarCorreo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        AgregarCorreo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AgregarCorreo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AgregarCorreo->setStatusBar(statusbar);

        retranslateUi(AgregarCorreo);

        QMetaObject::connectSlotsByName(AgregarCorreo);
    } // setupUi

    void retranslateUi(QMainWindow *AgregarCorreo)
    {
        AgregarCorreo->setWindowTitle(QApplication::translate("AgregarCorreo", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AgregarCorreo: public Ui_AgregarCorreo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCORREO_H
