#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int n){
  int original=n;
  int revnum = 0;
  while(n>0){
    int lastdigit = n%10;
    revnum = revnum*10 + lastdigit;
    n=n/10;
  }
  return (original==revnum);
}

int main() {
    int n;
    cin >> n;//044 is a palindrome but 44 is not equal to 044
    if(isPalindrome(n)) cout<<"true";
    else cout<<"false";
    return 0;
}
