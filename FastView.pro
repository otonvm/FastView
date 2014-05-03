QT += widgets

CONFIG += c++11

QMAKE_CXXFLAGS += -mmacosx-version-min=10.8
QMAKE_CXXFLAGS += -Wall
QMAKE_CXXFLAGS += -Werror
QMAKE_CXXFLAGS += -O0
QMAKE_CXXFLAGS += -march=native -mtune=native

SOURCES += main.cpp\
           mainwindow.cpp

HEADERS  += mainwindow.h
