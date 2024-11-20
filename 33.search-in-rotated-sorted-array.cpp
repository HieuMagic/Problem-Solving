#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int mid = 0;
        while (r >= l) {
            int mid = l + (r - l) / 2;
            cout << l << " " << r << "\n";
            int current = nums[mid];
            if (target == current) {
                return mid;
            }
            else if (target < current){
                if (current > nums[r] && nums[mid + 1] != nums[r]) l = mid + 1;
                else r = mid - 1;
            }
            else if (target > current){
                if (current < nums[l] && nums[mid - 1] != nums[l]) r = mid - 1;
                else l = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end

