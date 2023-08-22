#include "widget.h"
#include <QApplication>
#include "widget1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    widget1 w1;
    w1.show();




    return a.exec();
}
