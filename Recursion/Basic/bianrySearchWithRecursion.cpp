#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int l, int r, int k){
    if(l>r){
        return false;
    }
    int mid = l+(r-l)/2;
    if(arr[mid]==k){
        return true;
    }
    else if(arr[mid]>k){
        return BinarySearch(arr, l, mid-1, k);
    }
    else {
        return BinarySearch(arr, mid+1, r, k);
    }
}

int main(){
    int arr[] = {3,5,8,9,12,56,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=56;
    bool result = BinarySearch(arr, 0, n-1, k);
    if(result){
        cout << "Present" << endl;
    } else {
        cout << "Not Present" << endl;
    }
}