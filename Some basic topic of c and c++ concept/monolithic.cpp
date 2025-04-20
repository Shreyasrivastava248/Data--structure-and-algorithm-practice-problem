/*
  Program to Calculate Area and Perimeter of a Rectangle

  Description:
  This program takes the length and breadth of a rectangle as input from the user,
  then calculates and displays its area and perimeter.

  Objective:
  - Demonstrates basic input/output in C++
  - Uses functions to modularize code for area and perimeter
  - Aims for simplicity, low memory usage, and efficient execution
*/

#include <iostream>  // For input and output operations

using namespace std;

// Function to calculate area of rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// Function to calculate perimeter of rectangle
int perimeter(int length, int breadth) {
    return 2 * (length + breadth);
}

int main() {
    int length = 0, breadth = 0;  // Initialize dimensions

    // Prompt user to enter values
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;  // Input length and breadth from user

    // Calculate area and perimeter using the functions
    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    // Output the results
    cout << "Area = " << a << endl;
    cout << "Perimeter = " << peri << endl;
    cin.ignore();
    cin.get();

    return 0;  // Successful execution
}
