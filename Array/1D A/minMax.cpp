#include <iostream>
using namespace std;

//Time Complexity: O(N), where N is the size of the array, as we are iterating through the array once.
//Space Complexity: O(1), as we are using a constant
Space Complexity: O(1), as we are using a constant
int findLargestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}
int findSmallestElement(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);//use arr.size() only for vectors
    int max = findLargestElement(arr, n);
    cout << "The largest element in the array is: " << max << endl;
    int min = findSmallestElement(arr, n);
    cout << "The smallest element in the array is: " << min << endl;
    return 0;
}
// -----------------------------------OR---------------------------------
// int main(){
// int n;
// cout<<"No. of Elements in Array: ";
// cin >> n;
// int arr[n];
// cout<<"Enter Elements in Array: ";
// for (int i = 0; i < n; i++){
//     cin >> arr[i];
// }
// cout<<"Array: ";
// for (int i = 0; i < n; i++){
//     cout <<arr[i]<<" ";
// }
// int largest = arr[0];
// int smallest = arr[0];
// int i = 1;
//     while (i < n) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//         if(arr[i] < smallest){
//             smallest = arr[i];
//         }
//         i++;
//     }
//     cout << "Largest element = " << largest << endl;
//     cout << "Smallest element = " << smallest << endl;
//     return 0;
// }
