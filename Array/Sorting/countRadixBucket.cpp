#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ---------- COUNT SORT ----------
void countSort(int arr[], int n){
    int maxVal = arr[0];

    for(int i=1;i<n;i++)
        if(arr[i] > maxVal)
            maxVal = arr[i];

    int count[maxVal+1] = {0};

    for(int i=0;i<n;i++)
        count[arr[i]]++;

    int index = 0;

    for(int i=0;i<=maxVal;i++){
        while(count[i]--){
            arr[index++] = i;
        }
    }
}

// ---------- RADIX SORT ----------
void radixSort(int arr[], int n){
    int maxVal = *max_element(arr, arr+n);

    for(int exp=1; maxVal/exp>0; exp*=10){
        int output[n];
        int count[10] = {0};

        for(int i=0;i<n;i++)
            count[(arr[i]/exp)%10]++;

        for(int i=1;i<10;i++)
            count[i] += count[i-1];

        for(int i=n-1;i>=0;i--){
            output[count[(arr[i]/exp)%10]-1] = arr[i];
            count[(arr[i]/exp)%10]--;
        }

        for(int i=0;i<n;i++)
            arr[i] = output[i];
    }
}

// ---------- BUCKET SORT ----------
void bucketSort(int arr[], int n){
    int maxVal = *max_element(arr, arr+n);
    int bucketCount = 10;

    vector<vector<int>> buckets(bucketCount);

    for(int i=0;i<n;i++){
        int index = (arr[i]*bucketCount)/(maxVal+1);
        buckets[index].push_back(arr[i]);
    }

    int k = 0;

    for(int i=0;i<bucketCount;i++){
        sort(buckets[i].begin(), buckets[i].end());

        for(int j=0;j<buckets[i].size();j++){
            arr[k++] = buckets[i][j];
        }
    }
}

// ---------- DISPLAY ----------
void display(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

// ---------- MAIN ----------
int main(){
    int n, choice;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"\n1. Count Sort";
    cout<<"\n2. Radix Sort";
    cout<<"\n3. Bucket Sort";
    cout<<"\nEnter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            countSort(arr,n);
            cout<<"Sorted array (Count Sort): ";
            display(arr,n);
            break;

        case 2:
            radixSort(arr,n);
            cout<<"Sorted array (Radix Sort): ";
            display(arr,n);
            break;

        case 3:
            bucketSort(arr,n);
            cout<<"Sorted array (Bucket Sort): ";
            display(arr,n);
            break;

        default:
            cout<<"Invalid choice";
    }

    return 0;
}