#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// count no. of digits
int countDigits(int n){
int count=0;
  if(n==0) return 1;
    while(n>0){
      count++;
      n=n/10;
    }
    return count;
}
// --------------OR--------------------
int countDigit(int n){
  int count = int (log10(n)+1);//need to include bits header
  return count;
}//TC-> O(log10(n))
//if no. of iterations is based on the division, Time Complexity will be logarithmic 


int main() {
    int n;
    cin >> n;
    cout<<countDigits(n);
    cout<<endl;
    cout<<countDigit(n);
    return 0;
}
