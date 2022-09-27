//
// Created by clemens on 25.09.22.
//

#ifndef WORLD_CONWAYSGOL_H
#define WORLD_CONWAYSGOL_H


class ConwaysGoL {

    static int count_neighbors(int x, int y, const std::vector<std::vector<bool>> &grid);

public:
    static std::vector<std::vector<bool>> cgol_next_generation(const std::vector<std::vector<bool>>& grid);
};


#endif //WORLD_CONWAYSGOL_H
