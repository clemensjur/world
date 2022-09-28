//
// Created by clemens on 25.09.22.
//

#include <vector>
#include "ConwaysGoL.h"

std::vector<std::vector<bool>> ConwaysGoL::cgol_next_generation(const std::vector<std::vector<bool>>& grid) {
    std::vector<std::vector<bool>> next_gen = grid;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j]) {
                if (count_neighbors(j, i, grid) < 2) next_gen[i][j] = false;
                if (count_neighbors(j, i, grid) >= 2 && count_neighbors(j, i, grid) <= 3) next_gen[i][j] = true;
                if (count_neighbors(j, i, grid) > 3) next_gen[i][j] = false;
            } else {
                if (count_neighbors(j, i, grid) == 3) next_gen[i][j] = true;
            }
        }
    }
    return next_gen;
}

int ConwaysGoL::count_neighbors(int x, int y, const std::vector<std::vector<bool>>& grid) {
    int alive_neighbors = 0;
    for (int i = y-1; i <= y+1; i++) {
        for (int j = x-1; j <= x+1; j++) {
            int sim_x = j, sim_y = i;
            if (sim_y == y && sim_x == x) continue;
            if (sim_y == -1) sim_y = grid.size()-1;
            if (sim_y == grid.size()) sim_y = 0;
            if (sim_x == -1) sim_x = grid[0].size()-1;
            if (sim_x == grid[0].size()) sim_x = 0;
            if (grid[sim_y][sim_x]) alive_neighbors++;
        }
    }
    return alive_neighbors;
}
