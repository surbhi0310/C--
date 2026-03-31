#include <iostream>
using namespace std;
  int main(){
    int n;
    cout<<"Enter No. of Elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array: ";
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    int temp[n];
    for(int i=0;i<n;i++){
      temp[i]= arr[n-1-i];
    }
    cout<<endl;
    cout<<"Reversed Array: ";
    for(int i=0;i<n; i++){
      arr[i]=temp[i];
      cout<<arr[i]<<" ";
    }
  }