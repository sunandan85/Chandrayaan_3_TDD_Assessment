# Chandrayaan_3_TDD_Assessment

This is a repository for Chandrayaan 3 TDD Assessment.

This project implements a program to control the Chandrayaan 3 lunar spacecraft based on provided commands and galactic coordinates.

## Iterations

### Iteration 1

In this iteration, we set up the basic structure of the spacecraft control program and implemented the initial framework. Key changes made in this iteration include:

- Created the `Chandrayaan3Control` class to represent the spacecraft and its control logic.
- Implemented functions for turning the spacecraft left, right, up, and down.
- Added basic test cases to verify the correctness of turning actions.

### Iteration 2

In this iteration, we continued building the spacecraft control program by implementing the logic for moving the spacecraft forward and backward based on its current direction. Key changes made in this iteration include:

- Implemented functions for moving the spacecraft forward and backward.
- Added test cases to ensure correct forward and backward movement.

### Iteration 3

In this iteration, we extended the test suite to include more comprehensive test cases and verify the spacecraft's behavior in various scenarios. Key changes made in this iteration include:

- Added a set of test cases to cover forward and backward movement in different directions.
- Ensured that the spacecraft correctly maintains its position and direction after executing commands.

## Running Tests

To run the test suite for this spacecraft control program, follow these steps:

1. Compile the program with your C++ compiler.
2. Execute the compiled program to run the test cases.
3. The program will output the results of the test cases, indicating whether they passed or failed.

## Usage

To use the spacecraft control program, you can follow these steps:

1. Create an instance of the `Chandrayaan3Control` class with the initial coordinates and direction.
2. Execute a series of commands using the `executeCommands` method to control the spacecraft.
3. Retrieve the spacecraft's current position and direction using the provided getter methods.

```cpp
// Example usage:
Chandrayaan3Control chandrayaan(0, 0, 0, 'N');
chandrayaan.executeCommands({'f', 'r', 'u', 'b', 'l'});
int x = chandrayaan.getX();
int y = chandrayaan.getY();
int z = chandrayaan.getZ();
char direction = chandrayaan.getDirection();
```
