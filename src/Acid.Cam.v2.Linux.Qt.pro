######################################################################
# Automatically generated by qmake (2.01a) Wed Feb 1 02:31:01 2017
######################################################################

TEMPLATE = app
TARGET = Acid.Cam.v2.Qt
QT += core gui widgets
DEPENDPATH += .
INCLUDEPATH += . /usr/include/ /usr/local/include
LIBS += -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_video

QMAKE_CXXFLAGS += -std=c++11
RESOURCES += qresource.qrc

# Input
HEADERS += main_window.h new_dialog.h plugin.h qtheaders.h select_image.h ac.h fractal.h
SOURCES += main.cpp main_window.cpp new_dialog.cpp plugin.cpp select_image.cpp ac.cpp fractal.cpp
