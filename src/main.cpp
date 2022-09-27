#include <iostream>
#include <thread>
#include <chrono>
#include "Grid.h"

int main() {
    Grid grid(200, 100);
    while (true) {
        grid.render();
        grid.conwaysGoL();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << "Finished!" << std::endl;
    return 0;
}
