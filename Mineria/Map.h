#pragma once

#include <array>
#include "BlockBase.h"

constexpr auto WorldSize = 4;
constexpr auto WorldHeight = 16;
constexpr auto ChunkWidth = 4;
constexpr auto GroundLevel = WorldHeight / 2;

using ChunkInternal = std::array<std::array<BlockBase*, WorldHeight>, ChunkWidth>;

struct Chunk {
    ChunkInternal internal;
    int index;

    Chunk(int idx = 0);
    Chunk(ChunkInternal ci, int i);
};

using MapChunks = std::array<Chunk, WorldSize>;

struct Map {
    Chunk spawn;
    MapChunks leftChunks;
    MapChunks rightChunks;

    Map();
    Map(Chunk sp, MapChunks l, MapChunks r);
};

QGraphicsItemGroup* loadMap();
