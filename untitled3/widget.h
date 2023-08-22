#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "widget1.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

void windowclose0();

     widget1 *this1;

private:


};

#endif // WIDGET_H
