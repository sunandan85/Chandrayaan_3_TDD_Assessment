// Chandrayaan3Control.cpp

#include "Chandrayaan3Control.h"

Chandrayaan3Control::Chandrayaan3Control(int startX, int startY, int startZ, char startDirection, char prevDir)
    : x(startX), y(startY), z(startZ), direction(startDirection), PrevDirection(prevDir) {
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

char Chandrayaan3Control::getPrevDirection() const {
    return PrevDirection;
}

void Chandrayaan3Control::moveForward() {
    switch (direction) {
        case 'N':
            y += 1;
            break;
        case 'S':
            y -= 1;
            break;
        case 'E':
            x += 1;
            break;
        case 'W':
            x -= 1;
            break;
        case 'U':
            z += 1;
            break;
        case 'D':
            z -= 1;
            break;
        default:
            // Invalid direction
            break;
    }
}

void Chandrayaan3Control::moveBackward() {
    switch (direction) {
        case 'N':
            y -= 1;
            break;
        case 'S':
            y += 1;
            break;
        case 'E':
            x -= 1;
            break;
        case 'W':
            x += 1;
            break;
        case 'U':
            z -= 1;
            break;
        case 'D':
            z += 1;
            break;
        default:
            // Invalid direction
            break;
    }
}

void Chandrayaan3Control::turnLeft() {
    if(direction=='N') direction='W';
    else if(direction=='S') direction = 'E';
    else if(direction=='W') direction ='S';
    else if(direction=='E') direction='N';
    else{
        if(PrevDirection=='N') direction='W';
        else if(PrevDirection=='S') direction = 'E';
        else if(PrevDirection=='W') direction ='S';
        else if(PrevDirection=='E') direction='N';
    }
}

void Chandrayaan3Control::turnRight() {
    if(direction=='N') direction='E';
    else if(direction=='S') direction = 'W';
    else if(direction=='W') direction ='N';
    else if(direction=='E') direction='S';
    else{
        if(PrevDirection=='N') direction='E';
        else if(PrevDirection=='S') direction = 'W';
        else if(PrevDirection=='W') direction ='N';
        else if(PrevDirection=='E') direction='S';
    }
}

void Chandrayaan3Control::turnUp() {
    if(direction!='U' && direction!='D'){
        PrevDirection = direction;
    }
    direction = 'U';
}

void Chandrayaan3Control::turnDown() {
    if(direction!='U' && direction!='D'){
        PrevDirection = direction;
    }
    direction = 'D';
}
