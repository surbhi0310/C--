//1752. Check if Array Is Sorted and Rotated
#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int countBreaks = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {//compare current element with next element in circular manner
            countBreaks++;
            if (countBreaks > 1)//more than one break found
                return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {2, 1, 3, 4};
    if (check(nums))
        cout << "true";
    else
        cout << "false";
    return 0;
}
