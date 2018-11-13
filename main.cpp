#include <QApplication>
#include <QScreen>
#include "obclock.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ObClock clock;
    QRect screenrect = app.primaryScreen()->geometry();
    clock.move(screenrect.right()-55, screenrect.top());

    //connect(clock,SIGNAL(clicked(),&app,SLOT(closeAllWindows)));
    clock.show();
    return app.exec();
}
