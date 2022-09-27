//
// Created by clemens on 23.09.22.
//

#ifndef WORLD_GRIDRANDOMIZER_H
#define WORLD_GRIDRANDOMIZER_H


#include "TileType.h"
#include "perlin_noise.h"
#include "Grid.h"
#include <vector>

class GridRandomizer {
public:
    static siv::PerlinNoise new_noise();

    static std::vector<std::vector<bool>> randomize_grid(int width, int height);
};


#endif //WORLD_GRIDRANDOMIZER_H
