// Chandrayaan3Control.cpp

#include "Chandrayaan3Control.h"

Chandrayaan3Control::Chandrayaan3Control(int startX, int startY, int startZ, char startDirection)
    : x(startX), y(startY), z(startZ), direction(startDirection) {
    // Constructor implementation here
}

void Chandrayaan3Control::executeCommands(const std::vector<char>& commands) {
    for (char command : commands) {
        switch (command) {
            case 'f':
                moveForward();
                break;
            case 'b':
                moveBackward();
                break;
            case 'l':
                turnLeft();
                break;
            case 'r':
                turnRight();
                break;
            case 'u':
                turnUp();
                break;
            case 'd':
                turnDown();
                break;
            default:
                // Handle invalid commands (not specified in the problem statement) if needed
                break;
        }
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

void Chandrayaan3Control::moveForward() {
    // Implement move forward logic based on the current direction
    // Update x, y, or z accordingly
}

void Chandrayaan3Control::moveBackward() {
    // Implement move backward logic based on the current direction
    // Update x, y, or z accordingly
}

void Chandrayaan3Control::turnLeft() {
    // Implement turn left logic based on the current direction
    // Update direction accordingly
}

void Chandrayaan3Control::turnRight() {
    // Implement turn right logic based on the current direction
    // Update direction accordingly
}

void Chandrayaan3Control::turnUp() {
    // Implement turn up logic based on the current direction
    // Update direction accordingly
}

void Chandrayaan3Control::turnDown() {
    // Implement turn down logic based on the current direction
    // Update direction accordingly
}
