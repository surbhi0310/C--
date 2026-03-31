#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remPart = isArraySorted(arr+1, size-1);//starting arr from arr+1 = arr[1]
        return remPart;
    }
}

int main(){
    int arr[] = {2,3,4,5,6,7,7,7};
    int size = sizeof(arr)/sizeof(int);
    if(isArraySorted(arr,size)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}