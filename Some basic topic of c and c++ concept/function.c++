#include<iostream>  // Include the necessary header file for input/output operations

// This program adds two integers and displays the sum.

using namespace std;  // Use the standard namespace to avoid prefixing std:: for common operations

// Function to add two integers and return the result
int add(int a, int b) {
    // Declare a variable to store the sum
    int c;
    c = a + b;  // Perform the addition operation
    return c;  // Return the sum
}

int main() {
    int x, y, z;  // Declare three integer variables: x, y for input and z for storing the result
    
    // Initialize the values of x and y
    x = 10;  // Assign value 10 to x
    y = 10;  // Assign value 10 to y
    
    // Call the add function with x and y as arguments, store the result in z
    z = add(x, y);
    
    // Output the sum to the console
    cout << "The sum of two numbers is: " << z << endl;
    
    // Wait for user input before closing the console window
    std::cin.get();  // Used for pausing the program until the user presses Enter (optional)
    
    return 0;  // Indicate that the program has executed successfully
}
