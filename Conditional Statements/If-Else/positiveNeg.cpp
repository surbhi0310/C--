#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a Number: ";
  cin>>num;
  if(num<0){
    cout<<num<<" is a negative number.";
  }
  else if(num==0){
    cout<< num <<" is equal to 0";
  }
  else{
    cout<<num<<" is a positive number.";
  }
}