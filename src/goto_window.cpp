#include "goto_window.h"


GotoWindow::GotoWindow(QWidget *parent) : QDialog(parent) {
    createControls();
}

void GotoWindow::setDisplayWindow(DisplayWindow *win) {
    disp_window = win;
}

void GotoWindow::createControls() {
    
}

void GotoWindow::setFrameIndex(const long &i) {
    index = i;
}

void GotoWindow::ShowImage() {
    
}
