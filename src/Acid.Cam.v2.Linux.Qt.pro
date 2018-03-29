######################################################################
# Automatically generated by qmake (2.01a) Wed Feb 1 02:31:01 2017
######################################################################

TEMPLATE = app
TARGET = Acid_Cam_v2_Qt
QT += core gui widgets
DEPENDPATH += .
INCLUDEPATH += . /usr/include/ /usr/local/include
LIBS += `pkg-config acidcam opencv --libs`
#LIBS += -lopencv_contrib -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_video 
#LIBS += -L/usr/local/lib -lopencv_world
QMAKE_CXXFLAGS += -std=c++11 `pkg-config acidcam opencv --cflags`
RESOURCES += qresource.qrc

# Input
HEADERS += main_window.h new_dialog.h plugin.h qtheaders.h select_image.h display_window.h playback_thread.h
SOURCES += main.cpp main_window.cpp new_dialog.cpp plugin.cpp select_image.cpp display_window.cpp playback_thread.cpp
