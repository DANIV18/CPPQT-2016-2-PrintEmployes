TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp \
    office.cpp

HEADERS += \
    printable.h \
    employee.h \
    office.h
