#include <iostream>

int main() {
    // Create the variable
    int x = 25;

    // Create reference variable for x
    int& ref = x;

    // Use the reference to change x to 80
    ref = 80;

    // Print x
    std::cout << "The new value of x is: " << x << std::endl;

    return 0;
}

