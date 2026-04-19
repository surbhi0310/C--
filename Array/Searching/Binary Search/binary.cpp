#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>&arr,int target){
  int low = 0;
  int high = arr.size()-1;
  while(low<=high){
    int mid = low+(high-low)/2;
    if(target == arr[mid]){
    return mid;
    }
    else if(target>arr[mid]){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return -1;
}
int main(){
  int target;
  vector<int> arr = {12,34,5,76,1,46};
  sort(arr.begin(),arr.end());
  cin>>target;
  cout<<"Sorted Array: ";
  for(int x:arr){
    cout<<x<<" ";
  }cout<<endl;
  int position = binarySearch(arr,target);
  if(position ==-1){
    cout<<"Element Not Found";
  }
  else{
    cout<<"Element found at position: " <<position+1;
  }
  return 0;
}


