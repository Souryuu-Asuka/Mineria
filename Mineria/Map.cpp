#include "Map.h"
#include "Blocks.h"

Chunk::Chunk(int i)
{
    for (int i = 0; i < ChunkWidth; i++) {
        internal[i][0] = std::make_unique<Bedrock>();
        internal[i][1] = std::make_unique<Bedrock>();
        for (int j = 2; j < 30; j++)
            internal[i][j] = std::make_unique<Stone>();
        for (int j = 30; j < WorldHeight; j++)
            internal[i][j] = std::make_unique<Air>();
    }
    index = i;
}

Chunk::Chunk(ChunkInternal ci, int i)
    : internal(std::move(ci)), index(i) {}

Map::Map()
{
    spawn = std::make_unique<Chunk>(0);
    for (int i = 0; i < WorldSize; i++) {
        leftChunks[i] = std::make_unique<Chunk>(-i - 1);
        rightChunks[i] = std::make_unique<Chunk>(i + 1);
    }
}

Map::Map(std::unique_ptr<Chunk> sp, MapChunks l, MapChunks r)
    : spawn(std::move(sp)), leftChunks(std::move(l)), rightChunks(std::move(r)) {}
