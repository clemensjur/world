//
// Created by clemens on 24.09.22.
//

#include <iostream>
#include "GridRenderer.h"
#include "Grid.h"

void GridRenderer::render_grid(std::vector<std::vector<bool>> grid) {
    std::cout << "\033[2J" << "\033[0;0H";
    for (int i = 0; i < grid.size(); i+=2) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] && !grid[i + 1][j]) std::cout << "▀";
            else if (!grid[i][j] && grid[i + 1][j]) std::cout << "▄";
            else if (grid[i][j] && grid[i + 1][j]) std::cout << "█";
            else if (!grid[i][j] && !grid[i + 1][j]) std::cout << " ";
            else std::cout << "X";
        }
        std::cout << std::endl;
    }
}
