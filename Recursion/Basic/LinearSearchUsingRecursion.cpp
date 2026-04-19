#include <iostream> 
using namespace std;

bool LinearSearch(int arr[], int n, int target){
    if(n==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    bool remainingPart = LinearSearch(arr+1,n-1, target);
        return remainingPart;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int target = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    bool result = LinearSearch(arr, n, target);
    if(result){
        cout << "Present" << endl;
    } else {
        cout << "Not Present" << endl;
    }
    return 0;
}