#include <iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a Character: ";
  cin>>ch;
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z' )){
    cout<<ch<< " is an Alphabet.";
  }
  else if(ch>='0' && ch<='9'){
    cout<<ch<< " is a Digit.";
}
else{
  cout<<ch<< " is a Symbol.";
}
}