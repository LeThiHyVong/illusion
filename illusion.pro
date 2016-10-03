#-------------------------------------------------
#
# Project created by QtCreator 2016-09-27T09:18:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET   = illusion
TEMPLATE = app
CONFIG   += c++11

LIBS += -lglog

SOURCES  += \
    main.cpp \
    illusion/iloperation.cpp \
    illusion/iltcpoperation.cpp \
    illusion/illusion.cpp \
    illusion/ilfactory.cpp \
    illusion/ilsuite.cpp

HEADERS  += \
    illusion/illusion.hpp \
    illusion/illusion.ipp \
    illusion/iloperation.hpp \
    illusion/iloperation.ipp \
    illusion/iltcpoperation.hpp \
    illusion/iltcpoperation.ipp \
    illusion/ilstate.hpp \
    illusion/ilsuite.hpp \
    illusion/ilsuite.ipp \
    illusion/iltype.hpp \
    illusion/ilfactory.ipp \
    illusion/ilfactory.hpp
