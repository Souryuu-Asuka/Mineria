#include "Blocks.h"
#include <QColor>

#define GENDEF(name, color) name::name() : BlockBase(color) {} \
void name::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) \
{BlockBase::paint(painter, option, widget);} \
QRectF name::boundingRect() const {return BlockBase::boundingRect();}

GENDEF(Air, Qt::white)
GENDEF(Grass, Qt::green)
GENDEF(Dirt, Qt::yellow)
GENDEF(Stone, Qt::gray)
GENDEF(Bedrock, Qt::black)
//GENDEF(Wood)
//GENDEF(Leaf)
