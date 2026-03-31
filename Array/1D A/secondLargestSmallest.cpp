// Second Largest Element in an Array without sorting
#include <iostream>
#include <climits>
using namespace std;
#include <vector>
// Time Complexity: O(N), we do two linear traversals in our array.
// Space Complexity: O(1), as we are using a constant

int getSecondLargest(vector<int> &arr) {
        int max = INT_MIN;
        int secmax = INT_MIN;
        for(int i=0; i<arr.size();i++){
            if(max<arr[i]){
                secmax=max;
                max=arr[i];
            }
            else if(arr[i]>secmax && arr[i]!=max){
                secmax = arr[i];
            }
        }return (secmax==INT_MIN)?-1:secmax;
    }
int getSecondSmallest(vector<int> &arr) {
    int min = INT_MAX;
    int secmin = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < min) {
            secmin = min;
            min = arr[i];
        }
        else if (arr[i] > min && arr[i] < secmin) {
            secmin = arr[i];
        }
    }
    return (secmin == INT_MAX) ? -1 : secmin;
}

int main() {
    vector<int> arr = {12, 34, 56, 253, 98, 1, 8};
    int secmax = getSecondLargest(arr);
    int secmin = getSecondSmallest(arr);
    if (secmax == -1)
        cout << "Second largest element does not exist" << endl;
    else
        cout << "Second largest element: " << secmax << endl;
    if (secmin == -1)
        cout << "Second min element does not exist" << endl;
    else
        cout << "Second min element: " << secmin << endl;
    return 0;
}
