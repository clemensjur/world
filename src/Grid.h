//
// Created by clemens on 24.09.22.
//

#ifndef WORLD_GRID_H
#define WORLD_GRID_H


#include <vector>
#include <string>

class Grid {
private:
    int width;
    int height;
    std::vector<std::vector<bool>> tiles;
    std::string front_buffer = "\033[2J\033[0;0H";
public:
    Grid(int width, int height);

    [[nodiscard]] int getWidth() const;

    [[nodiscard]] int getHeight() const;

    [[nodiscard]] const std::vector<std::vector<bool>> &getTiles() const;

    [[nodiscard]] const std::string &getFrontBuffer() const;

    void render();

    void randomize();

    void conwaysGoL();

    void setFrontBuffer(const std::string &frontBuffer);
};


#endif //WORLD_GRID_H
