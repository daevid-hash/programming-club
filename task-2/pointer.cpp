#include <iostream>

int main() {
    // Create the variable
    int num = 50;

    // a. Use a pointer to store the address of num
    int* ptr = &num;

    // b. Print value using pointer (dereferencing)
    std::cout << "Original value using pointer: " << *ptr << std::endl;

    // c. Change value to '100' using pointer
    *ptr = 100;

    // Print new value
    std::cout << "New value of num: " << num << std::endl;

    return 0;
}
