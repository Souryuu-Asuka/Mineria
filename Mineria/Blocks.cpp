#include "Blocks.h"
#include <QColor>

#define GENDEF(name, color) name::name() : BlockBase(color) {}

GENDEF(Air, Qt::white)
GENDEF(Grass, Qt::green)
//GENDEF(Dirt)
GENDEF(Stone, Qt::gray)
GENDEF(Bedrock, Qt::black)
//GENDEF(Wood)
//GENDEF(Leaf)
