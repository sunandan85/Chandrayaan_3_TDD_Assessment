// Chandrayaan3Control.h

#ifndef CHANDRAYAAN3_CONTROL_H
#define CHANDRAYAAN3_CONTROL_H

#include <vector>
#include <string>

class Chandrayaan3Control {
public:
    Chandrayaan3Control(int startX, int startY, int startZ, char startDirection, char getPrevDirection);
    void executeCommands(const std::vector<char>& commands);
    int getX() const;
    int getY() const;
    int getZ() const;
    char getDirection() const;
    char getPrevDirection() const;

private:
    int x;
    int y;
    int z;
    char direction;
    char PrevDirection;

    void moveForward();
    void moveBackward();
    void turnLeft();
    void turnRight();
    void turnUp();
    void turnDown();
};

#endif
