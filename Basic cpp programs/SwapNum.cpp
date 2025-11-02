//Write a program to swap two numbers (using a temporary variable).
#include <iostream>
using namespace std;
int main(){
  int x = 2;
  int y = 5;
  cout<<x<<y<<endl;
  int temp = x;
  x = y;
  y = temp;
  cout<<x<<y<<endl;

//Write a program to swap two numbers without using a third variable.
  int a = 2;
  int b = 5;
  cout<<a<<b<<endl;
  a = a + b;
  b = a - b;
  a = a - b;
  cout<<a<<b;
}