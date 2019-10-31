/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepad
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_9;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *action_13;
    QAction *action_14;
    QAction *action_15;
    QAction *action_16;
    QAction *action_17;
    QAction *action_18;
    QAction *action_19;
    QAction *action_20;
    QAction *action_21;
    QAction *action_22;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_6;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *notepad)
    {
        if (notepad->objectName().isEmpty())
            notepad->setObjectName(QStringLiteral("notepad"));
        notepad->resize(561, 455);
        action = new QAction(notepad);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(notepad);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(notepad);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(notepad);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(notepad);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(notepad);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(notepad);
        action_7->setObjectName(QStringLiteral("action_7"));
        action_9 = new QAction(notepad);
        action_9->setObjectName(QStringLiteral("action_9"));
        action_10 = new QAction(notepad);
        action_10->setObjectName(QStringLiteral("action_10"));
        action_11 = new QAction(notepad);
        action_11->setObjectName(QStringLiteral("action_11"));
        action_12 = new QAction(notepad);
        action_12->setObjectName(QStringLiteral("action_12"));
        action_13 = new QAction(notepad);
        action_13->setObjectName(QStringLiteral("action_13"));
        action_14 = new QAction(notepad);
        action_14->setObjectName(QStringLiteral("action_14"));
        action_15 = new QAction(notepad);
        action_15->setObjectName(QStringLiteral("action_15"));
        action_16 = new QAction(notepad);
        action_16->setObjectName(QStringLiteral("action_16"));
        action_17 = new QAction(notepad);
        action_17->setObjectName(QStringLiteral("action_17"));
        action_18 = new QAction(notepad);
        action_18->setObjectName(QStringLiteral("action_18"));
        action_19 = new QAction(notepad);
        action_19->setObjectName(QStringLiteral("action_19"));
        action_20 = new QAction(notepad);
        action_20->setObjectName(QStringLiteral("action_20"));
        action_21 = new QAction(notepad);
        action_21->setObjectName(QStringLiteral("action_21"));
        action_22 = new QAction(notepad);
        action_22->setObjectName(QStringLiteral("action_22"));
        centralWidget = new QWidget(notepad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 541, 411));
        notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(notepad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 561, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_6 = new QMenu(menu_3);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(notepad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(notepad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        notepad->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_14);
        menu->addAction(action_15);
        menu->addAction(action_16);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_2->addAction(action_17);
        menu_2->addAction(action_18);
        menu_2->addAction(action_19);
        menu_2->addAction(action_20);
        menu_3->addAction(action_7);
        menu_3->addAction(menu_6->menuAction());
        menu_6->addAction(action_9);
        menu_6->addAction(action_10);
        menu_6->addAction(action_11);
        menu_4->addAction(action_12);
        menu_4->addAction(action_13);
        menu_4->addAction(action_21);
        menu_5->addAction(action_22);

        retranslateUi(notepad);

        QMetaObject::connectSlotsByName(notepad);
    } // setupUi

    void retranslateUi(QMainWindow *notepad)
    {
        notepad->setWindowTitle(QApplication::translate("notepad", "notepad", 0));
        action->setText(QApplication::translate("notepad", "\320\235\320\276\320\262\321\213\320\271", 0));
        action_2->setText(QApplication::translate("notepad", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        action_3->setText(QApplication::translate("notepad", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", 0));
        action_4->setText(QApplication::translate("notepad", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        action_5->setText(QApplication::translate("notepad", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        action_6->setText(QApplication::translate("notepad", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", 0));
        action_7->setText(QApplication::translate("notepad", "\320\250\321\200\320\270\321\204\321\202", 0));
        action_9->setText(QApplication::translate("notepad", "\320\241\320\273\320\265\320\262\320\260", 0));
        action_10->setText(QApplication::translate("notepad", "\320\237\320\276 \321\206\320\265\320\275\321\202\321\200\321\203", 0));
        action_11->setText(QApplication::translate("notepad", "\320\241\320\277\321\200\320\260\320\262\320\260", 0));
        action_12->setText(QApplication::translate("notepad", "\320\237\320\276\320\270\321\201\320\272", 0));
        action_13->setText(QApplication::translate("notepad", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \321\201\321\202\321\200\320\276\320\272\320\265...", 0));
        action_14->setText(QApplication::translate("notepad", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        action_15->setText(QApplication::translate("notepad", "\320\237\320\265\321\207\320\260\321\202\321\214", 0));
        action_16->setText(QApplication::translate("notepad", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_17->setText(QApplication::translate("notepad", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", 0));
        action_18->setText(QApplication::translate("notepad", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", 0));
        action_19->setText(QApplication::translate("notepad", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        action_20->setText(QApplication::translate("notepad", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\321\202\321\203", 0));
        action_21->setText(QApplication::translate("notepad", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        action_22->setText(QApplication::translate("notepad", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        menu->setTitle(QApplication::translate("notepad", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("notepad", "\320\237\321\200\320\260\320\262\320\272\320\260", 0));
        menu_3->setTitle(QApplication::translate("notepad", "\320\222\320\270\320\264", 0));
        menu_6->setTitle(QApplication::translate("notepad", "\320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265", 0));
        menu_4->setTitle(QApplication::translate("notepad", "\320\235\320\260\320\271\321\202\320\270", 0));
        menu_5->setTitle(QApplication::translate("notepad", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class notepad: public Ui_notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
