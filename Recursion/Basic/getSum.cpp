#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    else{
        int sumOfRest = getSum(arr+1, n-1);//minimizing the length  of array by 1 and starting from arr+1 = arr[1]
        int sumi = arr[0]+sumOfRest;//starting sum from last element->arr[0]+sum of rest of the array till last element
        return sumi;
    }
}

int main(){
    int arr[] = {4,1,3,9,7};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Sum of Array: "<<getSum(arr,size)<<endl;
    return 0;
}

//7
//9+7=16
//3+16=19
//1+19=20
//4+20=24