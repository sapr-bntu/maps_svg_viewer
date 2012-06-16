#-------------------------------------------------
#
# Project created by QtCreator 2012-06-13T10:29:43
#
#-------------------------------------------------

QT       += network opengl sql svg xml xmlpatterns qt3support testlib

TARGET = tst_testtest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_testtest.cpp \
    ../map.cpp \
    ../svgview.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../map.h \
    ../svgview.h
