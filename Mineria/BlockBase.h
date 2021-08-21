#pragma once

#include <QGraphicsItem>
//#include <QPixmap>

class BlockBase
    : public QGraphicsItem
{
public:
    BlockBase();
    BlockBase(QColor c);
    //BlockBase(bool transparency, QPixmap tx);
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
    virtual QRectF boundingRect() const override;

    QColor color;

};
