// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"No. of Elements in Array: ";
//   cin >> n;
//   int arr[n];
//   cout<<"Enter Elements in Array: ";
//   for (int i = 0; i < n; i++){
//     cin >> arr[i];
//   }
//   cout<<"Array: ";
//   for (int i = 0; i < n; i++){
//     cout <<arr[i]<<" ";
//   }
//   cout<<endl;
//   int max = arr[0];//[8,9,4,5,6]
//   int min = arr[0];
//   for(int i = 1; i < n; i++) {
//     if(arr[i] > max) max = arr[i]; 
//     if(arr[i] < min) min = arr[i];
//   }
//   cout << "max: " << max << endl;
//   cout << "min: " << min << endl;
//   return 0;
// } 

// -------------OR------------------

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];  // assume first element is largest
    int i = 1;

    // using while loop to find largest element
    while (i < n) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        i++;
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}
