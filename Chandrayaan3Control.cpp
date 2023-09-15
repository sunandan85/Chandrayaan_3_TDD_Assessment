// Chandrayaan3Control.cpp

#include "Chandrayaan3Control.h"

Chandrayaan3Control::Chandrayaan3Control(int startX, int startY, int startZ, char startDirection)
    : x(startX), y(startY), z(startZ), direction(startDirection)
{
    // Constructor implementation here
}

void Chandrayaan3Control::executeCommands(const std::vector<char> &commands)
{
    for (char command : commands)
    {
        switch (command)
        {
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

int Chandrayaan3Control::getX() const
{
    return x;
}

int Chandrayaan3Control::getY() const
{
    return y;
}

int Chandrayaan3Control::getZ() const
{
    return z;
}

char Chandrayaan3Control::getDirection() const
{
    return direction;
}

void Chandrayaan3Control::moveForward()
{
    // Implement move forward logic based on the current direction
    // Update x, y, or z accordingly
}

void Chandrayaan3Control::moveBackward()
{
    // Implement move backward logic based on the current direction
    // Update x, y, or z accordingly
}

void Chandrayaan3Control::turnLeft()
{
    switch (direction)
    {
    case 'N':
        direction = 'W';
        break;
    case 'S':
        direction = 'E';
        break;
    case 'E':
        direction = 'N';
        break;
    case 'W':
        direction = 'S';
        break;
    default:
        // Invalid direction
        break;
    }
}

void Chandrayaan3Control::turnRight()
{
    switch (direction)
    {
    case 'N':
        direction = 'E';
        break;
    case 'S':
        direction = 'W';
        break;
    case 'E':
        direction = 'S';
        break;
    case 'W':
        direction = 'N';
        break;
    default:
        // Invalid direction
        break;
    }
}

void Chandrayaan3Control::turnUp()
{
    switch (direction)
    {
    case 'N':
        direction = 'U';
        break;
    case 'S':
        direction = 'D';
        break;
    default:
        // Invalid direction
        break;
    }
}

void Chandrayaan3Control::turnDown()
{
    switch (direction)
    {
    case 'U':
        direction = 'N';
        break;
    case 'D':
        direction = 'S';
        break;
    default:
        // Invalid direction
        break;
    }
}
void Chandrayaan3Control::moveForward()
{
    switch (direction)
    {
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

void Chandrayaan3Control::moveBackward()
{
    switch (direction)
    {
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