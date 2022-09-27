//
// Created by clemens on 24.09.22.
//

#ifndef WORLD_GRID_H
#define WORLD_GRID_H


#include <vector>

class Grid {
private:
    int width;
    int height;
    std::vector<std::vector<bool>> tiles;
public:
    Grid(int width, int height);

    [[nodiscard]] int getWidth() const;

    [[nodiscard]] int getHeight() const;

    [[nodiscard]] const std::vector<std::vector<bool>> &getTiles() const;

    void render() const;

    void randomize();

    void conwaysGoL();
};


#endif //WORLD_GRID_H
