/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QCheckBox *latinCheck;
    QComboBox *latinCombo;
    QComboBox *ciryllicCombo;
    QCheckBox *ciryllicCheck;
    QCheckBox *didgitCheck;
    QLineEdit *didgitEdit;
    QCheckBox *symbolCheck;
    QLineEdit *symbolEdit;
    QSpinBox *lettersSpin;
    QLabel *label;
    QSpinBox *passCountSpin;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(440, 410);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/password.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        latinCheck = new QCheckBox(Widget);
        latinCheck->setObjectName("latinCheck");
        latinCheck->setGeometry(QRect(20, 10, 191, 17));
        latinCheck->setChecked(true);
        latinCombo = new QComboBox(Widget);
        latinCombo->addItem(QString());
        latinCombo->addItem(QString());
        latinCombo->addItem(QString());
        latinCombo->setObjectName("latinCombo");
        latinCombo->setGeometry(QRect(20, 30, 161, 22));
        latinCombo->setStyleSheet(QString::fromUtf8(""));
        ciryllicCombo = new QComboBox(Widget);
        ciryllicCombo->addItem(QString());
        ciryllicCombo->addItem(QString());
        ciryllicCombo->addItem(QString());
        ciryllicCombo->setObjectName("ciryllicCombo");
        ciryllicCombo->setGeometry(QRect(20, 100, 161, 22));
        ciryllicCheck = new QCheckBox(Widget);
        ciryllicCheck->setObjectName("ciryllicCheck");
        ciryllicCheck->setGeometry(QRect(20, 80, 191, 17));
        ciryllicCheck->setChecked(true);
        didgitCheck = new QCheckBox(Widget);
        didgitCheck->setObjectName("didgitCheck");
        didgitCheck->setGeometry(QRect(20, 150, 70, 17));
        didgitEdit = new QLineEdit(Widget);
        didgitEdit->setObjectName("didgitEdit");
        didgitEdit->setGeometry(QRect(20, 170, 61, 20));
        symbolCheck = new QCheckBox(Widget);
        symbolCheck->setObjectName("symbolCheck");
        symbolCheck->setGeometry(QRect(20, 220, 81, 17));
        symbolEdit = new QLineEdit(Widget);
        symbolEdit->setObjectName("symbolEdit");
        symbolEdit->setGeometry(QRect(20, 240, 161, 20));
        lettersSpin = new QSpinBox(Widget);
        lettersSpin->setObjectName("lettersSpin");
        lettersSpin->setGeometry(QRect(20, 310, 61, 22));
        lettersSpin->setMinimum(4);
        lettersSpin->setValue(8);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 290, 171, 16));
        passCountSpin = new QSpinBox(Widget);
        passCountSpin->setObjectName("passCountSpin");
        passCountSpin->setGeometry(QRect(20, 370, 61, 22));
        passCountSpin->setMinimum(5);
        passCountSpin->setMaximum(1000);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 350, 171, 16));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 360, 131, 31));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 360, 81, 31));
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(200, 10, 221, 341));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        latinCheck->setText(QCoreApplication::translate("Widget", "\320\221\321\203\320\272\320\262\321\213 \320\273\320\260\321\202\320\270\320\275\321\201\320\272\320\276\320\263\320\276 \320\260\320\273\321\204\320\260\320\262\320\270\321\202\320\260", nullptr));
        latinCombo->setItemText(0, QCoreApplication::translate("Widget", "\320\222\321\201\320\265", nullptr));
        latinCombo->setItemText(1, QCoreApplication::translate("Widget", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\261\320\276\320\273\321\214\321\210\320\270\320\265", nullptr));
        latinCombo->setItemText(2, QCoreApplication::translate("Widget", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\274\320\260\320\273\320\265\320\275\321\214\320\272\320\270\320\265", nullptr));

        ciryllicCombo->setItemText(0, QCoreApplication::translate("Widget", "\320\222\321\201\320\265", nullptr));
        ciryllicCombo->setItemText(1, QCoreApplication::translate("Widget", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\261\320\276\320\273\321\214\321\210\320\270\320\265", nullptr));
        ciryllicCombo->setItemText(2, QCoreApplication::translate("Widget", "\320\242\320\276\320\273\321\214\320\272\320\276 \320\274\320\260\320\273\320\265\320\275\321\214\320\272\320\270\320\265", nullptr));

        ciryllicCheck->setText(QCoreApplication::translate("Widget", "\320\232\320\270\321\200\320\270\320\273\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\201\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        didgitCheck->setText(QCoreApplication::translate("Widget", "\320\246\320\270\321\204\321\200\321\213", nullptr));
        didgitEdit->setText(QCoreApplication::translate("Widget", "0-9", nullptr));
        symbolCheck->setText(QCoreApplication::translate("Widget", "\320\241\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        symbolEdit->setText(QCoreApplication::translate("Widget", "%@$#!", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\262 \320\277\320\260\321\200\320\276\320\273\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
