
/*
 * Acid Cam v2 - Qt/OpenCV Edition
 * written by Jared Bruni ( http://lostsidedead.com )
 * (C) 2017 GPL
 */

#include"display_window.h"

DisplayWindow::DisplayWindow(QWidget *parent) : QDialog(parent) {
    createControls();
    setGeometry(950, 200, 640, 480);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
    setWindowTitle(tr("Acid Cam v2 - Display Window"));
    hide();
}
void DisplayWindow::createControls() {
    img_label = new QLabel(this);
    img_label->setGeometry(0,0,640, 480);
}
void DisplayWindow::displayImage(const QImage &img) {
    QRect src(QPoint(0, 0), size());
    QPixmap p = QPixmap::fromImage(img).scaled(size(),Qt::KeepAspectRatio, Qt::FastTransformation);
    QRect dst(QPoint(0,0),p.size());
    dst.moveCenter(src.center());
    img_label->setGeometry(dst);
    img_label->setPixmap(p);
}


void DisplayWindow::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.fillRect(QRect(QPoint(0, 0), size()), QColor(0,0,0));
}

void DisplayWindow::keyPressEvent(QKeyEvent *) {
    
}

void DisplayWindow::keyReleaseEvent(QKeyEvent *) {
    
}
