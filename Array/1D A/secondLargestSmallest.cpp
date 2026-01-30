// Second Largest Element in an Array without sorting
#include <iostream>
#include <climits>
using namespace std;
// Time Complexity: O(N), we do two linear traversals in our array.
// Space Complexity: O(1), as we are using a constant

int SecondLargestElement(int arr[], int n) {
    if (n < 2) return -1;
    int largest = arr[0];
    int secondlargest = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondlargest) {
            secondlargest = arr[i];
        }
    }
    if (secondlargest == INT_MIN)//all elements are equal
        return -1;
    return secondlargest;
}

int SecondSmallestElement(int arr[], int n) {
    if (n < 2) return -1;
    int smallest = arr[0];
    int secondsmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondsmallest) {
            secondsmallest = arr[i];
        }
    }
    if (secondsmallest == INT_MAX)//all elements are equal
        return -1;
    return secondsmallest;
}

int main() {
    int arr[] = {12, 34, 56, 253, 98, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = SecondLargestElement(arr, n);
    int secondSmallest = SecondSmallestElement(arr, n);
    if (secondLargest == -1)
        cout << "Second largest element does not exist" << endl;
    else
        cout << "Second largest element: " << secondLargest << endl;

    if (secondSmallest == -1)
        cout << "Second smallest element does not exist" << endl;
    else
        cout << "Second smallest element: " << secondSmallest << endl;
    return 0;
}
