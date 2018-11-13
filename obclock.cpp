  #include <QtWidgets>
#include "obclock.h"

ObClock::ObClock(QWidget *parent)
    : QLCDNumber(parent)
{
    setSegmentStyle(Filled);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ObClock::showTime);
    timer->start(1000);

    showTime();

    setStyleSheet("background:transparent;");
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);

    setWindowTitle(tr(" "));
    resize(55, 18);
}

void ObClock::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 3) == 0)
        text[2] = ' ';
    display(text);
}

void ObClock::mousePressEvent(QMouseEvent *me)
{
    close();
}
