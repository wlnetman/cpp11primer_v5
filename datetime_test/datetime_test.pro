TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += static_runtime

SOURCES += main.cpp

include(../msvc.pri)
include(../utils.pri)
include(../fmt.pri)

