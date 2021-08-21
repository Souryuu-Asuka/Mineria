#pragma once

#include <array>
#include "BlockBase.h"

constexpr auto WorldSize = 64;
constexpr auto WorldHeight = 64;
constexpr auto ChunkWidth = 16;

using ChunkInternal = std::array<std::array<std::unique_ptr<BlockBase>, WorldHeight>, ChunkWidth>;

struct Chunk {
    ChunkInternal internal;
    int index;

    Chunk(int i);
    Chunk(ChunkInternal ci, int i);
};

using MapChunks = std::array<std::unique_ptr<Chunk>, WorldSize>;

struct Map {
    std::unique_ptr<Chunk> spawn;
    MapChunks leftChunks;
    MapChunks rightChunks;

    Map();
    Map(std::unique_ptr<Chunk> sp, MapChunks l, MapChunks r);
};
