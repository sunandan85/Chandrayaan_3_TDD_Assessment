// Chandrayaan3ControlTest.cpp

#include "Chandrayaan3Control.h"
#include <iostream>
#include <cassert>

int main() {
    Chandrayaan3Control chandrayaan(0, 0, 0, 'N');

    // Test 1: Basic movement
    chandrayaan.executeCommands({'f', 'r', 'u', 'b', 'l'});
    assert(chandrayaan.getX() == 0);
    assert(chandrayaan.getY() == 1);
    assert(chandrayaan.getZ() == -1);
    assert(chandrayaan.getDirection() == 'N');

    // Test 2: Turn left
    chandrayaan.executeCommands({'l'});
    assert(chandrayaan.getX() == 0);
    assert(chandrayaan.getY() == 1);
    assert(chandrayaan.getZ() == -1);
    assert(chandrayaan.getDirection() == 'W');

    // Test 3: Turn right
    chandrayaan.executeCommands({'r'});
    assert(chandrayaan.getX() == 0);
    assert(chandrayaan.getY() == 1);
    assert(chandrayaan.getZ() == -1);
    assert(chandrayaan.getDirection() == 'N');

    // Add more test cases for turning up and down

    std::cout << "All test cases passed!" << std::endl;
    return 0;
}