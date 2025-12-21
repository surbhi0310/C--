// #include<iostream>
// using namespace std;
// int main(){
//   int arr[] ={4,5,6,2,1};
//   int size = sizeof(arr)/sizeof(arr[0]);
//   cout<<"Original array: ";
//   for(int i=0; i<size;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
 
//   for(int pass=1; pass<size;pass++){
//    bool flag = false;
//     for(int i=0; i<size-pass; i++){
//       if(arr[i]> arr[i+1]){
//         swap(arr[i],arr[i+1]);
//         flag = true;
//       }
//     }
//     if(flag == false){
//       cout<<" Array is already sorted";
//       break;
//     }
//   }
//   cout<<"Sorted array: ";
//   for(int i=0; i<size;i++){
//       cout<<arr[i]<<" ";
//     }
// }


// -------------------------------------OR------------------------------------


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        // Last i elements are already in correct place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                swap(arr[j],arr[j+1]);
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no two elements were swapped -> already sorted
        if (!swapped)
            break;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
