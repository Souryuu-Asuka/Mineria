#include "Mineria.h"
#include <QDebug>
#include <QKeyEvent>

Mineria::Mineria(QWidget *parent)
    : QGraphicsView(parent)
{
    x = 0; y = 0;
}

void Mineria::keyPressEvent(QKeyEvent* event)
{
    qDebug() << "Key " << event->text() << " Pressed!";
    QGraphicsView::keyPressEvent(event);
}

void Mineria::mouseMoveEvent(QMouseEvent* event)
{
    QGraphicsView::mouseMoveEvent(event);
}

void Mineria::mousePressEvent(QMouseEvent* event)
{
    QGraphicsView::mousePressEvent(event);
}
