#include <iostream>
#include <thread>
#include "Grid.h"

int main() {
    Grid grid(200, 100);
    int timer = 0;
    while (timer < 1000) {
        grid.render();

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        timer++;
    }
    std::cout << "Finished!" << std::endl;
    return 0;
}
