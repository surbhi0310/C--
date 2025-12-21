//Write a program to find the area and perimeter of a rectangle.
#include <iostream>
using namespace std;

int main()
{
  int l;
  int b;
  cout<<"Enter Length and Breadth of Rectangle: ";
  cin>>l;
  cin>>b;
  cout<<"Area of Rectangle: "<<l*b<<endl;
  cout<<"Perimeter of Rectangle: "<<2*(l+b);
}