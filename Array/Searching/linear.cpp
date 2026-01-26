#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int target;
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    cin >> target;
    int position = linearSearch(arr, n, target);
    if (position == -1)
        cout << "Element not found";
    else
        cout << "Element found at position: " << position + 1;
    return 0;
}

// ------------------------------OR-------------------------------------

// int linearSearch(vector<int>& arr, int target) {
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] == target)
//             return i;
//     }
//     return -1;
// }

// int main() {
//     int target;
//     vector<int> arr = {12, 34, 10, 6, 40};
//     cin >> target;
//     int position = linearSearch(arr,target);
//     if (position == -1)
//         cout << "Element not found";
//     else
//         cout << "Element found at position: " << position + 1;
//     return 0;
// }