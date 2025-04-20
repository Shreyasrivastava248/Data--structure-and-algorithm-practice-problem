#include<iostream>  // Include the header file for input/output stream operations
using namespace std;  // Use the standard namespace to avoid having to prefix with 'std::'

// Function to print the elements of an array using traditional for loop
void fun(int A[], int n)  // Takes an array and its size (n) as parameters
{
    for (int i = 0; i < n; i++)  // Loop through the array from index 0 to n-1
        cout << A[i] << endl;  // Print each element on a new line
}

int main()  // Main function where the program execution begins
{
    int A[] = {2, 4, 6, 8, 10};  // Declare and initialize an array of integers
    int n = 5;  // Declare the size of the array

    fun(A, n);  // Call the function to print the array elements using traditional for loop

    // Print the array elements using range-based for loop
    for (int x : A)  // Range-based for loop iterates through the array elements
        cout << x << " ";  // Print each element followed by a space

    std::cin.get();  // Wait for the user to press Enter before closing the program
    return 0;  // Return 0 to indicate the program executed successfully
}