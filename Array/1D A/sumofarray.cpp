#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter your Elements in array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Array: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int sum =0;
  for(int i=0; i<n; i++){
    sum = sum + arr[i];
    
  }
  cout<<"Sum: "<<sum;

  }