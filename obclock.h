#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QLCDNumber>

class ObClock : public QLCDNumber
{
    Q_OBJECT

public:
    ObClock(QWidget *parent = 0);

private slots:
    void showTime();
    void mousePressEvent(QMouseEvent *me);
};

#endif
