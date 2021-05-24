/********************************************************************************
** Form generated from reading UI file 'guitabular.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUITABULAR_H
#define UI_GUITABULAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guitabularClass
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *guitabularClass)
    {
        if (guitabularClass->objectName().isEmpty())
            guitabularClass->setObjectName(QString::fromUtf8("guitabularClass"));
        guitabularClass->resize(600, 400);
        actionExit = new QAction(guitabularClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(guitabularClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        guitabularClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(guitabularClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        guitabularClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(guitabularClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        guitabularClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(guitabularClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        guitabularClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(guitabularClass);

        QMetaObject::connectSlotsByName(guitabularClass);
    } // setupUi

    void retranslateUi(QMainWindow *guitabularClass)
    {
        guitabularClass->setWindowTitle(QApplication::translate("guitabularClass", "guitabular", nullptr));
        actionExit->setText(QApplication::translate("guitabularClass", "Exit", nullptr));
        menuFile->setTitle(QApplication::translate("guitabularClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guitabularClass: public Ui_guitabularClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUITABULAR_H
