// #include <iostream>
// using namespace std;

// int main(){
//   int arr[] = {9,-1,2,8,3,7,6,11,-4};
//    int n = sizeof(arr)/sizeof(arr[0]);
//   cout<<"Printing Original Array: ";
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   for(int i=1; i<n;i++){
//     int temp = arr[i];
//     int j=i-1;
//     for(; j>=0;j--){
//       if(arr[j]>temp){
//         arr[j+1]=arr[j];
//       }
//       else{
//         break;
//       }
//     }
//     arr[j+1]=temp;
//   }
//   cout<<"Printing Sorted Array: ";
//   for(int i =0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }
// }

// --------------------------------------OR----------------------------------------------

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
