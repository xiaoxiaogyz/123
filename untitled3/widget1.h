#ifndef WIDGET1_H
#define WIDGET1_H

#include <QWidget>


class widget1 : public QWidget
{
    Q_OBJECT
public:
    explicit widget1(QWidget *parent = nullptr);

signals:

public slots:
    void windowclose1();
};

#endif // WIDGET1_H
