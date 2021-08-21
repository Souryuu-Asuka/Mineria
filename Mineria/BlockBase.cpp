#include "BlockBase.h"
#include <QPainter>

BlockBase::BlockBase() 
    : QGraphicsItem()
{
    color = Qt::red;
    //setFlag(QGraphicsItem::ItemIsFocusable);
    //setFlag(QGraphicsItem::ItemIsMovable);
    //setAcceptDrops(true);
}

BlockBase::BlockBase(QColor c)
    : QGraphicsItem()
{
    color = c;
    //setFlag(QGraphicsItem::ItemIsFocusable);
    //setFlag(QGraphicsItem::ItemIsMovable);
    //setAcceptDrops(true);
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
    painter->setBrush(color);
    painter->drawRect(-BlockSize / 2, -BlockSize / 2, BlockSize, BlockSize);
}

QRectF BlockBase::boundingRect() const
{
    qreal adjust = 0;
    return QRectF(-BlockSize / 2 - adjust, -BlockSize / 2 - adjust, BlockSize + adjust, BlockSize + adjust);
}

//BlockBase::BlockBase(bool trans, QPixmap tx)
//    : QGraphicsItem()
//{
//    isTransparent = trans;
//    texture = tx;
//}
