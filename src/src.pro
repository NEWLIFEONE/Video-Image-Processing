
TARGET  = base
TEMPLATE= lib
VERSION = 0.1.0
CONFIG += static

DESTDIR = ../lib

INCLUDEPATH += ../include
DEPENDPATH  += . ../include


SOURCES += \
    smdkv210/linuxfbscreen.cpp
HEADERS += \
    smdkv210/linuxfbscreen.h