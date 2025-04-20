// This program demonstrates basic operations on structs in C++.
// It defines a struct 'rectangle' and provides functions to initialize it, calculate its area, and change its length.
// The program also demonstrates how to pass structs by reference (using pointers) to functions for modification.

#include <iostream>
using namespace std;

// Define a struct to represent a rectangle with length and breadth as its members.
struct rectangle
{
    int length;  // Length of the rectangle
    int breadth; // Breadth of the rectangle
};

// Function to initialize the values of the rectangle struct.
// Takes a pointer to a struct and two integers as parameters to set length and breadth.
void initialized(struct rectangle *r, int l, int b)
{
    r->length = l;    // Set the length of the rectangle
    r->breadth = b;   // Set the breadth of the rectangle
}

// Function to calculate the area of the rectangle.
// Takes the rectangle struct by value and returns the product of length and breadth.
int area(struct rectangle r)
{
    return r.length * r.breadth;  // Calculate the area: length * breadth
}

// Function to change the length of the rectangle.
// Takes a pointer to a struct and a new length value as parameters.
void changelength(struct rectangle *r, int l)
{
    r->length = l;  // Set the new length for the rectangle
}

int main()
{
    struct rectangle r;  // Declare a rectangle object 'r'
    
    // Initialize the rectangle with length 10 and breadth 5 using the 'initialized' function.
    initialized(&r, 10, 5);
    
    // Calculate and print the area of the rectangle.
    int rect_area = area(r);
    cout << "Area of the rectangle: " << rect_area << endl;
    
    // Change the length of the rectangle to 20 using the 'changelength' function.
    changelength(&r, 20);
    
    // Optionally, print the updated area after changing the length.
    rect_area = area(r);
    cout << "Updated area of the rectangle: " << rect_area << endl;
    std::cin.get();  // Wait for the user to press Enter before closing the program
    return 0;  // Exit the program successfully.
}
