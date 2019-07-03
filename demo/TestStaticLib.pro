QT += core gui widgets

INCLUDEPATH += $$PWD $$PWD/inc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/ -lStaticLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/ -lStaticLibd

SOURCES += \
    main.cpp
