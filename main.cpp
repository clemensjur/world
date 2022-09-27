#include <iostream>
#include <thread>
#include <chrono>
#include "Grid.h"

int main() {
    Grid grid(150, 80);
    int max_runtime = 0;
    while (max_runtime < 1000) {
        grid.render();
        grid.conwaysGoL();
        max_runtime++;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << "Finished!" << std::endl;
    return 0;
}
