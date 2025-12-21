
#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"No. of Elements in Array: ";
  cin >> n;
  int arr[n];
  cout<<"Enter Elements in Array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout<<"Array: ";
  for (int i = 0; i < n; i++){
    cout <<arr[i]<<" ";
  }
}