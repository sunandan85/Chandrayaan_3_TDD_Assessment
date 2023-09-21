// Chandrayaan3ControlTest.cpp

#include "Chandrayaan3Control.h"
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    Chandrayaan3Control chandrayaan(0, 0, 0, 'N', 'N');

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

    // Test 4: Move forward and backward
    chandrayaan.executeCommands({'f', 'f', 'b', 'b'});
    assert(chandrayaan.getX() == 0);
    assert(chandrayaan.getY() == 1);
    assert(chandrayaan.getZ() == -1);
    assert(chandrayaan.getDirection() == 'N');

    // Test 5: Move forward and backward with direction change
    chandrayaan.executeCommands({'r', 'f', 'l', 'b'});
    assert(chandrayaan.getX() == 1);
    assert(chandrayaan.getY() == 0);
    assert(chandrayaan.getZ() == -1);
    assert(chandrayaan.getDirection() == 'N');

    // Add more test cases for turning up and down

    std::cout << "All test cases passed!" << std::endl;
    return 0;
}


// g++ Chandrayaan3Control.cpp Chandrayaan3ControlTest.cpp -o Chandrayaan3ControlTest
