######################################################################
# Automatically generated by qmake (2.01a) Wed Feb 1 02:31:01 2017
######################################################################

TEMPLATE = app
TARGET = Acid.Cam.v2.Qt
RC_FILE = win-icon.rc
QT += core gui widgets
DEPENDPATH += .
INCLUDEPATH += . C:\OpenCV\opencv\build\include /usr/include/ /usr/local/include
LIBS += C:/OpenCV/opencv/build/x64/vc15/lib/opencv_world341.lib -luser32 -lgdi32
#QMAKE_CXXFLAGS += -std=c++11
RESOURCES += qresource.qrc

# Input
HEADERS += main_window.h new_dialog.h plugin.h qtheaders.h select_image.h ac.h fractal.h display_window.h playback_thread.h ac.h fractal.h search_box.h goto_window.h chroma_window.h user_define.h ac-filtercat.h
SOURCES += main.cpp main_window.cpp new_dialog.cpp plugin.cpp select_image.cpp fractal.cpp display_window.cpp playback_thread.cpp search_box.cpp user_define.cpp fractal.cpp ac-alpha.cpp ac-obj.cpp ac-util.cpp ac-square.cpp ac-particle.cpp ac-grid.cpp ac-basic.cpp ac-filter1.cpp  ac-filter2.cpp ac-filter3.cpp ac-filter4.cpp ac-filter5.cpp ac-filter6.cpp ac-filter7.cpp ac-filter8.cpp ac-filter9.cpp ac-filter10.cpp ac-filter11.cpp ac-filter12.cpp ac-filter13.cpp ac-filter14.cpp ac-filter15.cpp ac-filter16.cpp ac-filter17.cpp ac-image.cpp ac-box.cpp chroma_window.cpp goto_window.cpp ac-filtercat.cpp
