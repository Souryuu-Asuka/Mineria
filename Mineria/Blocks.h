#pragma once

#include "BlockBase.h"

#define GENBLOCK(name) class name : public BlockBase { \
public: \
    name(); \
};

GENBLOCK(Air)
GENBLOCK(Grass)
GENBLOCK(Dirt)
GENBLOCK(Stone)
GENBLOCK(Bedrock)
GENBLOCK(Wood)
GENBLOCK(Leaf)
