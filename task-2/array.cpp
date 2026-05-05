#include <iostream>

int main() {
    // Create an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // a. Normal for loop
    std::cout << "Using normal for loop: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // b. For-each loop (range-based for loop in C++)
    std::cout << "Using for-each loop:   ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

