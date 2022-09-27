cmake_minimum_required(VERSION 3.23)
project(world)

set(CMAKE_CXX_STANDARD 17)

add_executable(world src/main.cpp src/TileType.h src/Entity.cc src/Entity.h src/GridRandomizer.cc src/GridRandomizer.h src/perlin_noise.h src/GridRenderer.cc src/GridRenderer.h src/Grid.cc src/Grid.h src/ConwaysGoL.cc src/ConwaysGoL.h)
