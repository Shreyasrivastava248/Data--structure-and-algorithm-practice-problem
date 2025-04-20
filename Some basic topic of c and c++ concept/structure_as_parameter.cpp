#include <iostream>
#include <stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r = {10, 5};
    printf("the length is: %d\n and breadth is %d\n", r.length, r.breadth);
    std::cin.get(); // Wait for the user to press Enter before closing the program
    return 0;
}