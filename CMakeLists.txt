cmake_minimum_required(VERSION 3.23)
project(world)

set(CMAKE_CXX_STANDARD 17)

add_executable(world main.cpp TileType.h Entity.cc Entity.h GridRandomizer.cc GridRandomizer.h perlin_noise.h GridRenderer.cc GridRenderer.h Grid.cc Grid.h ConwaysGoL.cc ConwaysGoL.h)
