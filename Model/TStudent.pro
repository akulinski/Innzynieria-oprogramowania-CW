TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    TStudent.cpp \
    TUniversity.cpp

SUBDIRS += \
    TStudent.pro

HEADERS += \
    TStudent.h \
    TUniversity.h
