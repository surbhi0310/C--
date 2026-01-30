// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
    // 4 5 6 7 8 4 7 8 ;
        if (nums.size() == 0) return 0;
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(nums);
    cout<<"The array after removing duplicates is: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}