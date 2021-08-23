#include "Map.h"
#include "BlockBase.h"
#include "Blocks.h"

Chunk::Chunk(int idx)
{
    index = idx;

    for (int i = 0; i < ChunkWidth; i++) {
        internal[i][0] = new Bedrock();
        internal[i][1] = new Bedrock();
        for (int j = 2; j < GroundLevel-1; j++)
            internal[i][j] = new Stone();
        internal[i][GroundLevel-1] = new Grass();
        for (int j = GroundLevel; j < WorldHeight; j++)
            internal[i][j] = new Air();
    }
    
    for (int i = 0; i < ChunkWidth; i++)
        for (int j = 0; j < WorldHeight; j++)
            internal[i][j]->setPos(index*ChunkWidth*BlockSize + i*BlockSize, WorldHeight* BlockSize - j* BlockSize);
}

Chunk::Chunk(ChunkInternal ci, int i)
    : internal(std::move(ci)), index(i) {}

Map::Map()
{
    spawn = Chunk(0);
    for (int i = 0; i < WorldSize; i++) {
        leftChunks[i] = Chunk(-i - 1);
        rightChunks[i] = Chunk(i + 1);
    }
}

Map::Map(Chunk sp, MapChunks l, MapChunks r)
    : spawn(std::move(sp)), leftChunks(std::move(l)), rightChunks(std::move(r)) {}

QGraphicsItemGroup* loadMap()
{
    auto map = Map();
    QGraphicsItemGroup* g = new QGraphicsItemGroup();
    for (auto& i : map.spawn.internal)
        for (auto j : i)
            g->addToGroup(j);
    for (auto& i : map.leftChunks)
        for (auto& j : i.internal)
            for (auto k : j)
                g->addToGroup(k);
    for (auto& i : map.rightChunks)
        for (auto& j : i.internal)
            for (auto k : j)
                g->addToGroup(k);

    return g;
}
