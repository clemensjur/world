//
// Created by clemens on 24.09.22.
//

#ifndef WORLD_GRIDRENDERER_H
#define WORLD_GRIDRENDERER_H


#include "Grid.h"

class GridRenderer {
public:
    static void render_grid(Grid *grid);

    static std::string build_back_buffer(Grid *grid);
};


#endif //WORLD_GRIDRENDERER_H
