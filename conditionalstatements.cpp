#include <iostream>

int main() {
    // One-condition if/else statement
    bool x = true;

    if (x == true) {
        // Code to execute if x is true
        std::cout << "x is true" << std::endl;
    }
    else {
        // Code to execute if x is false
        std::cout << "x is false" << std::endl;
    }

    // Multi-condition if/else statement
    int y = 8;

    if (x && y < 10) {
        // Code to execute if both conditions are true
        std::cout << "x is true and y is less than 10" << std::endl;
    }
    else {
        // Code to execute if either condition is false
        std::cout << "Either x is false or y is not less than 10" << std::endl;
    }

    // If/else if/else statements
    int z = 5;

    if (z > 10) {
        // Code to execute if z is greater than 10
        std::cout << "z is greater than 10" << std::endl;
    }
    else if (z < 0) {
        // Code to execute if z is less than 0
        std::cout << "z is less than 0" << std::endl;
    }
    else {
        // Code to execute if none of the above conditions are true
        std::cout << "z is between 0 and 10 (inclusive)" << std::endl;
    }

    // Short-circuit logic
    bool p = true;
    bool q = false;

    if (p && q) {
        // Code here will not execute since q is false (short-circuit)
        std::cout << "This won't be printed" << std::endl;
    }

    if (p || q) {
        // Code here will execute since p is true (short-circuit)
        std::cout << "This will be printed" << std::endl;
    }

    // Switch-case statement
    int choice = 2;

    switch (choice) {
        case 1:
            // Code to execute if choice is 1
            std::cout << "Choice is 1" << std::endl;
            break;
        case 2:
            // Code to execute if choice is 2
            std::cout << "Choice is 2" << std::endl;
            break;
        case 3:
            // Code to execute if choice is 3
            std::cout << "Choice is 3" << std::endl;
            break;
        default:
            // Code to execute if none of the above cases match
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}
