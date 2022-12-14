#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(440,410);
    this->setWidgetStyle();
}

Widget::~Widget()
{
    delete ui;
}

bool didgitIsValid(QString str){
    if(str.length()!=3){
        return false;
    }
    str.replace('-',"");
    for(QChar c:str){
        if((c<'0'||c>'9')||str.length()>2){


            return false;
    }
    }
    if(str[0]>str[1]){
        return false;
    }
    return true;
}
void Widget::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
QString errStr;
QString latinLower= "abcdefghijklmnopqrstuvwxyz";
QString cyrillicLower = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
QString latinUpper = latinLower.toUpper();
QString cyrillicUpper = cyrillicLower.toUpper();
QString resStr;

if(ui->latinCheck->isChecked()){
    if(ui->latinCombo->currentIndex()==1){
        resStr+=latinUpper;
    }
    else if(ui->latinCombo->currentIndex()==2){
        resStr+=latinLower;
    }
    else{
        resStr+=latinUpper + latinLower;
    }

}

if(ui->ciryllicCheck->isChecked()){
    if(ui->ciryllicCombo->currentIndex()==1){
        resStr+=cyrillicUpper;
    }
    else if(ui->ciryllicCombo->currentIndex()==2){
        resStr+=cyrillicLower;
    }
    else{
        resStr+=latinUpper + cyrillicLower;
    }

}
if(ui->symbolCheck->isChecked()){
    QString symbols = ui->symbolEdit->text();
    symbols.replace(' ',"");
    resStr+=symbols;
}

if(ui->didgitCheck->isChecked()){
    QString str = ui->didgitEdit->text();
    str.replace(' ',"");
    if(didgitIsValid(str)==false){
        QMessageBox::critical(this,"Ошибка","Введите корректное значение. Пример: 1-9, 1  -  9,1 - 9");
    }
    else{
    int start = QString(str.at(0)).toInt();
    int stop = QString(str.at(2)).toInt();
    for(int i = start;i<=stop;i++){
        resStr += QString::number(i);}
    }
}

if(resStr.length()==0){
    errStr = "Необходимо выбрать что-либо";
}

if(errStr.length()>0){
    QMessageBox::critical(this,"Ошибка",errStr);
}
else{
    int lettersCount = ui->lettersSpin->value();
    int passCount = ui->passCountSpin->value();
    srand(time(NULL));
    for(int i = 0;i<passCount;i++){
        QString pass = "";
        for(int j = 0;j<lettersCount;j++){
            int index = rand()%resStr.length();
            pass+=resStr[index];
        }
        ui->plainTextEdit->appendPlainText(pass);
    }
}
}

void Widget::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
}


/*******************************************
 * Функция устанавливает QSS для виджетов.
 *******************************************/
void Widget::setWidgetStyle()
{
    this->setStyleSheet(
    "QWidget{"
        "background-color:#ddd;"
    "}"
    "QLineEdit{"
        "border:1px solid #aaa;"
        "background:#fff;"
        "border-radius:3px;"
        "color:#333;"
    "}"
    "QLineEdit:hover{"
        "border:1px solid #0078d7;"
    "}"
    "QSpinBox{"
        "border:1px solid #aaa;"
        "background:#fff;"
        "border-radius:3px;"
        "color:#333;"
    "}"
    "QSpinBox:hover{"
        "border:1px solid #0078d7;"
    "}"
    "QComboBox{"
        "border:1px solid #aaa;"
        "background-color: qlineargradient(spread:pad, x1:0.585, y1:1, x2:0.506, y2:0, "
                           "stop:0 rgba(180, 180, 180, 255), stop:1 rgba(232, 232, 232, 255));"
        "border-radius:3px;"
        "color:#333;"
    "}"
    "QComboBox::drop-down {"
        "subcontrol-origin: padding;"
        "subcontrol-position: top right;"
        "width: 15px;"
        "border-left-width: 1px;"
        "border-left-color: darkgray;"
        "border-left-style: solid;"
        "border-top-right-radius: 3px;"
        "border-bottom-right-radius: 3px;"
    "}"
    "QComboBox::down-arrow {"
        "image: url(:/images/arrow.png);"
    "}"
    "QComboBox QListView{"
        "background:#fff;"
    "}"
    "QComboBox:hover{"
        "border:1px solid #0078d7;"
    "}"
    "QSpinBox::up-button {"
        "subcontrol-origin: border;"
        "subcontrol-position: top right;"
        "background-color:#eee;"
        "width: 16px;"
        "border-width: 1px;"
        "height:10px;"
        "margin-top:1px;"
        "margin-right:1px;"
        "border-radius:4px;"
    "}"
    "QSpinBox::down-button {"
        "subcontrol-origin: border;"
        "subcontrol-position: bottom right;"
        "background-color:#eee;"
        "width: 16px;"
        "border-width: 1px;"
        "height:10px;"
        "margin-bottom:1px;"
        "margin-right:1px;"
        "border-radius:4px;"
    "}"
    "QSpinBox::down-arrow {"
        "image: url(:/images/down.png);"
        "width: 7px;"
        "height: 7px;"
    "}"
    "QSpinBox::up-arrow {"
        "image: url(:/images/up.png);"
        "width: 7px;"
        "height: 7px;"
    "}"
    "QPlainTextEdit{"
        "border:1px solid #ccc;"
        "background:#fff;"
    "}"
    "QPlainTextEdit:hover{"
        "border:1px solid #0078d7;"
    "}"
    "QPushButton{"
        "background-color: qlineargradient(spread:pad, x1:0.585, y1:1, x2:0.506, y2:0, stop:0 rgba(180, 180, 180, 255), stop:1 rgba(232, 232, 232, 255));"
        "border-radius:5px;"
        "border:1px solid #aaa;"
        "color:#555;"
    "}"
    "QPushButton:hover{"
        "background-color: qlineargradient(spread:pad, x1:0.585, y1:1, x2:0.506, y2:0, stop:0 rgba(200, 200, 200, 200), stop:1 rgba(232, 232, 232, 255));"
        "border-radius:5px;"
        "border:1px solid #0078d7;"
        "color:#111;"
    "}");
}




