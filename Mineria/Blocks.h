#pragma once

#include "BlockBase.h"

#define GENBLOCK(name) class name : public BlockBase { \
public: \
    name(); \
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override; \
    virtual QRectF boundingRect() const override; \
};

GENBLOCK(Air)
GENBLOCK(Grass)
GENBLOCK(Dirt)
GENBLOCK(Stone)
GENBLOCK(Bedrock)
GENBLOCK(Wood)
GENBLOCK(Leaf)
