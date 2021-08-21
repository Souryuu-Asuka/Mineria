#include "BlockBase.h"
#include <QPainter>

BlockBase::BlockBase() 
    : QGraphicsItem()
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsMovable);
    setAcceptDrops(true);
}

BlockBase::BlockBase(QColor c)
    : QGraphicsItem()
{
    color = c;
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsMovable);
    setAcceptDrops(true);
}

void BlockBase::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    if (hasFocus()) {
        painter->setPen(QPen(QColor(255, 255, 255, 200)));
    }
    else {
        painter->setPen(QPen(QColor(100, 100, 100, 100)));
    }
    painter->setBrush(Qt::red);
    painter->drawRect(-10, -10, 20, 20);
}

QRectF BlockBase::boundingRect() const
{
    qreal adjust = 0.5;
    return QRectF(-10 - adjust, -10 - adjust, 20 + adjust, 20 + adjust);
}

//BlockBase::BlockBase(bool trans, QPixmap tx)
//    : QGraphicsItem()
//{
//    isTransparent = trans;
//    texture = tx;
//}
