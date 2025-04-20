#include<iostream>  // Include the header file for input/output stream
using namespace std;  // Use the standard namespace so we don't have to type "std::" every time

// Function to swap the values of two integers
void swap(int *a, int *b)  // Function takes two pointers to integers as parameters
{
    int temp;  // Declare a temporary integer to store one value during the swap
    temp = *a;  // Store the value of the first integer in 'temp' using pointer dereferencing
    *a = *b;  // Assign the value of the second integer to the first integer through pointer dereferencing
    *b = temp;  // Assign the stored value in 'temp' to the second integer
}

int main()  // Main function where the program execution starts
{
    int x = 12;  // Declare and initialize an integer variable x with value 12
    int y = 21;  // Declare and initialize an integer variable y with value 21
    swap(&x, &y);  // Call the swap function, passing the addresses of x and y

    cout << "Swapped two numbers: " << x << " " << y << endl;  // Print the swapped values of x and y
    std::cin.get();  // Wait for the user to press enter before closing the program

    return 0;  // Return 0 to indicate the program executed successfully
}
