QT       += core gui

TARGET = MapManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qdmwina.cpp \
    distributedialog.cpp

HEADERS  += mainwindow.h \
    qdmwina.h \
    common.h \
    distributedialog.h

FORMS    += mainwindow.ui \
    distributedialog.ui

#INCLUDEPATH += /usr/include/qt4
INCLUDEPATH += /usr/share/qt4/include


LIBS += -L/usr/lib \
    -lmapcomponents \
    -lgsslink \
    -lqdmapacces \
    -lqdmapqtfrm


















