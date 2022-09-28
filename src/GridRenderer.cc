//
// Created by clemens on 24.09.22.
//

#include <iostream>
#include <future>
#include "GridRenderer.h"
#include "Grid.h"

void GridRenderer::render_grid(Grid *grid) {
    auto ret = std::async(build_back_buffer, grid);
    std::cout << grid->getFrontBuffer();
    std::string back_buffer = ret.get();
    grid->setFrontBuffer(back_buffer);
}

std::string GridRenderer::build_back_buffer(Grid *grid) {
    std::string back_buffer = "\033[2J\033[0;0H";
    for (int i = 0; i < grid->getTiles().size(); i+=2) {
        for (int j = 0; j < grid->getTiles()[0].size(); j++) {
            if (grid->getTiles()[i][j] && !grid->getTiles()[i + 1][j]) back_buffer.append("▀");
            else if (!grid->getTiles()[i][j] && grid->getTiles()[i + 1][j]) back_buffer.append("▄");
            else if (grid->getTiles()[i][j] && grid->getTiles()[i + 1][j]) back_buffer.append("█");
            else if (!grid->getTiles()[i][j] && !grid->getTiles()[i + 1][j]) back_buffer.append(" ");
            else back_buffer.append("X");
        }
        back_buffer.append("\n");
    }
    return back_buffer;
}
