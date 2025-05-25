/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QGraphicsView *agentOne_3;
    QLabel *label_6;
    QGraphicsView *graphicsView_3;
    QGraphicsView *agentTwo_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName("widget");
        widget->resize(1140, 600);
        centralwidget = new QWidget(widget);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, -7, 1121, 571));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_5);

        agentOne_3 = new QGraphicsView(layoutWidget);
        agentOne_3->setObjectName("agentOne_3");
        agentOne_3->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(agentOne_3->sizePolicy().hasHeightForWidth());
        agentOne_3->setSizePolicy(sizePolicy);
        agentOne_3->setFocusPolicy(Qt::NoFocus);
        agentOne_3->setStyleSheet(QString::fromUtf8("background: transparent; border: none;\n"
""));

        horizontalLayout_3->addWidget(agentOne_3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_6);

        graphicsView_3 = new QGraphicsView(layoutWidget);
        graphicsView_3->setObjectName("graphicsView_3");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView_3->sizePolicy().hasHeightForWidth());
        graphicsView_3->setSizePolicy(sizePolicy1);
        graphicsView_3->setStyleSheet(QString::fromUtf8("background: transparent; border: none;"));

        horizontalLayout_3->addWidget(graphicsView_3);

        agentTwo_3 = new QGraphicsView(layoutWidget);
        agentTwo_3->setObjectName("agentTwo_3");
        agentTwo_3->setEnabled(false);
        sizePolicy.setHeightForWidth(agentTwo_3->sizePolicy().hasHeightForWidth());
        agentTwo_3->setSizePolicy(sizePolicy);
        agentTwo_3->setMaximumSize(QSize(16777215, 16777215));
        agentTwo_3->setStyleSheet(QString::fromUtf8("background: transparent; border: none;"));

        horizontalLayout_3->addWidget(agentTwo_3);

        widget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(widget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 23));
        widget->setMenuBar(menubar);
        statusbar = new QStatusBar(widget);
        statusbar->setObjectName("statusbar");
        widget->setStatusBar(statusbar);

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QMainWindow *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "widget", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
