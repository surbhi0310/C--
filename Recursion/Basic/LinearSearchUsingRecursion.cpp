#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

vector<int> LinearSearch(vector<int> arr, int target){
    if(arr.size()==0){
    return -1;
    }
    if(arr[0]==target){
        return 0;
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 3;
    int result = LinearSearch(arr, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}