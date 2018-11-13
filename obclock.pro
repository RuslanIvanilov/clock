QT += widgets

HEADERS       = obclock.h
SOURCES       = obclock.cpp \
                main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/digitalclock
INSTALLS += target
