//
// Created by clemens on 24.09.22.
//

#include "Grid.h"
#include "GridRandomizer.h"
#include "GridRenderer.h"
#include "ConwaysGoL.h"

Grid::Grid(int width, int height) : width(width), height(height) {
    this->width = width;
    this->height = height;
    this->tiles = GridRandomizer::randomize_grid(this->width, this->height);
}

void Grid::render() const {
    GridRenderer::render_grid(this->tiles);
}

void Grid::randomize() {
    this->tiles = GridRandomizer::randomize_grid(this->width, this->height);
}

void Grid::conwaysGoL() {
    this->tiles = ConwaysGoL::cgol_next_generation(this->tiles);
}

int Grid::getWidth() const {
    return width;
}

int Grid::getHeight() const {
    return height;
}

const std::vector<std::vector<bool>> &Grid::getTiles() const {
    return tiles;
}