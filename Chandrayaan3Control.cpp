// Chandrayaan3Control.cpp

#include "Chandrayaan3Control.h"

Chandrayaan3Control::Chandrayaan3Control(int startX, int startY, int startZ, char startDirection)
    : x(startX), y(startY), z(startZ), direction(startDirection) {
    // Constructor implementation here
}

void Chandrayaan3Control::executeCommands(const std::vector<char>& commands) {
    for (char command : commands) {
        // Implement command execution logic here based on the problem statement
        // Use helper functions like moveForward(), turnLeft(), etc.
    }
}

int Chandrayaan3Control::getX() const {
    return x;
}

int Chandrayaan3Control::getY() const {
    return y;
}

int Chandrayaan3Control::getZ() const {
    return z;
}

char Chandrayaan3Control::getDirection() const {
    return direction;
}

// Implement the helper functions for movement and rotation here
