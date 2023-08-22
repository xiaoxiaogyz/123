#include "widget.h"
#include "QDebug"
#include "QPushButton"
#include "widget1.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this1 = new widget1(this);
    this->setWindowTitle("0");
    QPushButton *btn = new QPushButton("1",this);
    connect(btn,&QPushButton::clicked,this,&Widget::hide);
    if (connect(btn, &QPushButton::clicked, this1, &widget1::windowclose1)) {
        qDebug() << "Connect successful!";
    } else {
        qDebug() << "Connect failed!";
    } ;
}

Widget::~Widget()
{

}

void Widget::windowclose0()
{
   this->hide();
}


