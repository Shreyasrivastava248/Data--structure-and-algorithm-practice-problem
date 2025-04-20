#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
 
}
int main()
{
    int x,y;
    x=10;
    
    y=20;
    swap(x,y);
cout<<"first num"<<x<<endl;
cout<<"second num"<<y;
std::cin.get();
return 0;
}
