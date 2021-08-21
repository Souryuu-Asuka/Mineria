#pragma once

#include <QGraphicsView>
#include <QDebug>

class Mineria : public QGraphicsView
{
    Q_OBJECT

public:
    Mineria(QWidget *parent = nullptr);

protected:
    virtual void keyPressEvent(QKeyEvent* event) override;
    virtual void mouseMoveEvent(QMouseEvent* event) override;
    virtual void mousePressEvent(QMouseEvent* event) override;

private:
    int x, y;
};
