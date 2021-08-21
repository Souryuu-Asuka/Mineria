#pragma once

#include <QGraphicsScene>

class WorldScene : public QGraphicsScene 
{
    Q_OBJECT

public:
    WorldScene(QObject* parent = nullptr);

protected:
    virtual void keyPressEvent(QKeyEvent* event) override;
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override;

private:
    int x;
    int y;
};
