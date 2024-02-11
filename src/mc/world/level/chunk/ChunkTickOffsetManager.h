#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkTickOffsetManager {
public:
    // prevent constructor by default
    ChunkTickOffsetManager& operator=(ChunkTickOffsetManager const&);
    ChunkTickOffsetManager(ChunkTickOffsetManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkTickOffsetManager@@QEAA@XZ
    MCAPI ChunkTickOffsetManager();

    // symbol:
    // ?getClientTickingOffsets@ChunkTickOffsetManager@@QEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
    MCAPI std::vector<class ChunkPos> const& getClientTickingOffsets() const;

    // symbol:
    // ?getTickingOffsets@ChunkTickOffsetManager@@QEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
    MCAPI std::vector<class ChunkPos> const& getTickingOffsets() const;

    // symbol: ?initialize@ChunkTickOffsetManager@@QEAAXI@Z
    MCAPI void initialize(uint);

    // symbol: ?shuffleTickingOffsets@ChunkTickOffsetManager@@QEAAXAEAVRandom@@@Z
    MCAPI void shuffleTickingOffsets(class Random&);

    // symbol: ??1ChunkTickOffsetManager@@QEAA@XZ
    MCAPI ~ChunkTickOffsetManager();

    // NOLINTEND
};
