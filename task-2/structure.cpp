#include <iostream>

// Create the structure: Rectangle
struct Rectangle {
    double Width;
    double Breadth;
};

int main() {
    // Create a Rectangle named 'r1'
    Rectangle r1;

    // Assigning values to Width and Breadth
    r1.Width = 5.0;
    r1.Breadth = 10.0;

    // Calculate and print the area of r1
    double area = r1.Width * r1.Breadth;
    std::cout << "The area of rectangle r1 is: " << area << std::endl;

    return 0;
}

