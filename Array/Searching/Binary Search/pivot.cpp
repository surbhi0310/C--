#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr){
    int l=0, r=arr.size()-1;
    while(l<r){
        int  mid=l+(r-l)/2;
        if(arr[mid]> arr[r]){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }return l;
}

int main(){
    vector<int> arr = {2,3,4,5,6,0,1,2};
    cout<<getPivot(arr);
}

