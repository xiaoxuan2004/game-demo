/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameClass)
    {
        if (GameClass->objectName().isEmpty())
            GameClass->setObjectName(QString::fromUtf8("GameClass"));
        GameClass->resize(600, 393);
        GameClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(GameClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        GameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GameClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        GameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GameClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GameClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GameClass->setStatusBar(statusBar);

        retranslateUi(GameClass);

        QMetaObject::connectSlotsByName(GameClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameClass)
    {
        GameClass->setWindowTitle(QCoreApplication::translate("GameClass", "Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameClass: public Ui_GameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
