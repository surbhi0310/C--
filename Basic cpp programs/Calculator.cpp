//Write a program to create simple calculator with two numbers.
#include <iostream>
using namespace std;
int main(){
  int num1;
  int num2;
  cin>>num1;
  cin>>num2;
  cout<<"First Number:"<<num1<<endl;
  cout<<"Second Number:"<<num2<<endl; 
  cout<<"Add: "<<num1 + num2<<endl;
  cout<<"Subtract: "<<num1-num2<<endl;
  cout<<"Multiply: "<<num1*num2<<endl;
  cout<<"Divide: "<<num1/num2<<endl;
  cout<<"Modulo: "<<num1%num2<<endl;
}