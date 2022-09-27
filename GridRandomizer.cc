//
// Created by clemens on 23.09.22.
//

#include <random>
#include <iostream>
#include "GridRandomizer.h"
#include "perlin_noise.h"
#include "Grid.h"

std::vector<std::vector<bool>> GridRandomizer::randomize_grid(int width, int height) {
    const siv::PerlinNoise perlin = new_noise();
    std::vector<std::vector<bool>> new_grid = std::vector<std::vector<bool>> (height, std::vector<bool> (width));
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            const double noise = perlin.octave2D_01(j, i, 4);
            if (noise >= 0.0 && noise <= 0.55) new_grid[i][j] = true;
            if (noise > 0.55 && noise <= 1.0) new_grid[i][j] = false;
        }
    }
    return new_grid;
}

siv::PerlinNoise GridRandomizer::new_noise() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, INT32_MAX);
    const siv::PerlinNoise::seed_type seed = dist(mt);
    return siv::PerlinNoise { seed };
}
