// This program demonstrates basic operations on classes and objects in C++.
// It defines a class 'rectangle' with private member variables (length, breadth) and public member functions.
// The class provides functionality to initialize values, calculate the area, and change the length.
// The program demonstrates how to use class constructors and member functions in C++.

#include <iostream>
using namespace std;

// Define a class 'rectangle' to represent a rectangle with length and breadth as private members.
class rectangle
{
private:
    int length;  // Length of the rectangle
    int breadth; // Breadth of the rectangle

public:
    // Constructor to initialize the rectangle with given length and breadth.
    rectangle(int l, int b)
    {
        length = l;    // Set the length of the rectangle
        breadth = b;   // Set the breadth of the rectangle
    }

    // Function to calculate the area of the rectangle.
    // This function calculates the area by multiplying length and breadth.
    int area()
    {
        return length * breadth;  // Calculate the area: length * breadth
    }

    // Function to change the length of the rectangle.
    // Takes an integer l as a parameter and updates the length of the rectangle.
    void changelength(int l)
    {
        length = l;  // Set the new length for the rectangle
    }
};

int main()
{
    // Declare a rectangle object 'r' and initialize it using the constructor with length 10 and breadth 5.
    rectangle r(10, 5);  // The constructor is called with arguments (10, 5)

    // Calculate and print the area of the rectangle.
    int rect_area = r.area();  // Call the area function and store the result in 'rect_area'
    cout << "Area of the rectangle: " << rect_area << endl;  // Print the area to the console.

    // Change the length of the rectangle to 20 using the 'changelength' function.
    r.changelength(20);  // The length is updated to 20

    // Calculate and print the updated area after changing the length.
    rect_area = r.area();  // Recalculate the area after changing the length
    cout << "Updated area of the rectangle: " << rect_area << endl;  // Print the updated area.

    std::cin.get();  // Wait for the user to press Enter before closing the program

    return 0;  // Exit the program successfully.
}
