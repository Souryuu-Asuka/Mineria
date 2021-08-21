#include "WorldScene.h"
#include <QDebug>
#include <QKeyEvent>

WorldScene::WorldScene(QObject* parent) : QGraphicsScene(parent)
{
    x = 0;
    y = 0;
    setSceneRect(x, y, 640, 480);
}

void WorldScene::keyPressEvent(QKeyEvent* event)
{
    switch (event->key())
    {
    case Qt::Key_D:
        x += 1;
        break;
    case Qt::Key_A:
        x -= 1;
        break;
    default:
        break;
    }
    qDebug() << "x: " << x << " " << "y: " << y;
    setSceneRect(x, y, 640+x, 480);
    update();
    QGraphicsScene::keyPressEvent(event);
}

void WorldScene::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    QGraphicsScene::mouseMoveEvent(event);
}

void WorldScene::mousePressEvent(QGraphicsSceneMouseEvent* event)
{
    QGraphicsScene::mousePressEvent(event);
}
