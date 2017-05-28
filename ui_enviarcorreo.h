/********************************************************************************
** Form generated from reading UI file 'enviarcorreo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIARCORREO_H
#define UI_ENVIARCORREO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnviarCorreo
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EnviarCorreo)
    {
        if (EnviarCorreo->objectName().isEmpty())
            EnviarCorreo->setObjectName(QStringLiteral("EnviarCorreo"));
        EnviarCorreo->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/sendemail.png"), QSize(), QIcon::Normal, QIcon::Off);
        EnviarCorreo->setWindowIcon(icon);
        centralwidget = new QWidget(EnviarCorreo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 801, 601));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 361, 51));
        QFont font;
        font.setFamily(QStringLiteral("Saab"));
        font.setPointSize(26);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 221, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 160, 221, 31));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 160, 221, 31));
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 210, 221, 31));
        label_7->setFont(font1);
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 260, 221, 31));
        label_9->setFont(font1);
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 260, 221, 31));
        label_10->setFont(font1);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(220, 110, 251, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        textEdit->setFont(font2);
        textEdit_2 = new QTextEdit(tab);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(220, 210, 251, 31));
        textEdit_2->setFont(font2);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 320, 221, 31));
        label_11->setFont(font1);
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(180, 320, 221, 31));
        label_12->setFont(font1);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 380, 211, 61));
        pushButton->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-10, 40, 291, 51));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 130, 221, 31));
        label_13->setFont(font1);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(180, 130, 221, 31));
        label_14->setFont(font1);
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 170, 221, 31));
        label_15->setFont(font1);
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(190, 170, 221, 31));
        label_16->setFont(font1);
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 220, 221, 31));
        label_17->setFont(font1);
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(150, 220, 221, 31));
        label_18->setFont(font1);
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 270, 221, 31));
        label_19->setFont(font1);
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(180, 270, 181, 31));
        label_20->setFont(font1);
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(60, 320, 221, 31));
        label_21->setFont(font1);
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(130, 320, 221, 31));
        label_22->setFont(font1);
        label_22->setLayoutDirection(Qt::LeftToRight);
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(60, 370, 221, 31));
        label_23->setFont(font1);
        label_23->setLayoutDirection(Qt::LeftToRight);
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(130, 370, 221, 31));
        label_24->setFont(font1);
        label_24->setLayoutDirection(Qt::LeftToRight);
        label_24->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        EnviarCorreo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(EnviarCorreo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EnviarCorreo->setStatusBar(statusbar);

        retranslateUi(EnviarCorreo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EnviarCorreo);
    } // setupUi

    void retranslateUi(QMainWindow *EnviarCorreo)
    {
        EnviarCorreo->setWindowTitle(QApplication::translate("EnviarCorreo", "Enviar Correo", Q_NULLPTR));
        label_5->setText(QApplication::translate("EnviarCorreo", "Enviar Correo", Q_NULLPTR));
        label_2->setText(QApplication::translate("EnviarCorreo", "ID Remitente:", Q_NULLPTR));
        label_4->setText(QApplication::translate("EnviarCorreo", "Nombre Remitente:", Q_NULLPTR));
        label_6->setText(QApplication::translate("EnviarCorreo", "aqu\303\255 va el nombre", Q_NULLPTR));
        label_7->setText(QApplication::translate("EnviarCorreo", "ID Destinatario:", Q_NULLPTR));
        label_9->setText(QApplication::translate("EnviarCorreo", "Nombre Destinatario:", Q_NULLPTR));
        label_10->setText(QApplication::translate("EnviarCorreo", "aqu\303\255 va el nombre", Q_NULLPTR));
        label_11->setText(QApplication::translate("EnviarCorreo", "Tipo de Encomienda:", Q_NULLPTR));
        label_12->setText(QApplication::translate("EnviarCorreo", "aqu\303\255 va el tipo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EnviarCorreo", "Confirmar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EnviarCorreo", "Datos de Entrega", Q_NULLPTR));
        label_8->setText(QApplication::translate("EnviarCorreo", "Detalles", Q_NULLPTR));
        label_13->setText(QApplication::translate("EnviarCorreo", "ID Destinatario:", Q_NULLPTR));
        label_14->setText(QApplication::translate("EnviarCorreo", "#ID Destinatario:", Q_NULLPTR));
        label_15->setText(QApplication::translate("EnviarCorreo", "Nombre Destinario:", Q_NULLPTR));
        label_16->setText(QApplication::translate("EnviarCorreo", "Nombre Destinario:", Q_NULLPTR));
        label_17->setText(QApplication::translate("EnviarCorreo", "Direcci\303\263n:", Q_NULLPTR));
        label_18->setText(QApplication::translate("EnviarCorreo", "Direcci\303\263n", Q_NULLPTR));
        label_19->setText(QApplication::translate("EnviarCorreo", "Encomienda:", Q_NULLPTR));
        label_20->setText(QApplication::translate("EnviarCorreo", "Encomienda", Q_NULLPTR));
        label_21->setText(QApplication::translate("EnviarCorreo", "Peso:", Q_NULLPTR));
        label_22->setText(QApplication::translate("EnviarCorreo", "Peso", Q_NULLPTR));
        label_23->setText(QApplication::translate("EnviarCorreo", "Total:", Q_NULLPTR));
        label_24->setText(QApplication::translate("EnviarCorreo", "Total", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("EnviarCorreo", "Detalles del Env\303\255o", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EnviarCorreo: public Ui_EnviarCorreo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIARCORREO_H
