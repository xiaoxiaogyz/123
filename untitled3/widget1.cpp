#include "widget1.h"
#include "widget.h"
#include <QDebug>

widget1::widget1(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("1");
}

void widget1::windowclose1()
{
   qDebug()<<"123";
    this->hide();
}


