//Squares of a sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // pow+sort -> O(n log n) more than two pointer O(n)
        int n = nums.size();
        vector<int> result(n);

        int l = 0;
        int r = n - 1;
        int pos = n - 1;

        while (l <= r) {
            int lsq = nums[l] * nums[l];
            int rsq = nums[r] * nums[r];

            if (lsq > rsq) {
                result[pos] = lsq;
                l++;
            } else {
                result[pos] = rsq;
                r--;
            }
            pos--;
        }return result;
    }
};