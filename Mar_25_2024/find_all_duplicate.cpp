#include <bits/stdc++.h>

using namespace std;

/**
 * @brief 
 * Initialize an empty vector ans to store the duplicates.
Iterate through the array nums.
For each element nums[i], take its absolute value x.
Check if nums[x-1] is negative.
If it is, then x is a duplicate, so add it to ans.
Otherwise, mark nums[x-1] as negative.
Return ans.
 */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int length = nums.size();
        vector<int> res;
        
        for (int i = 0; i < length; i++) {
            int abs_n = abs(nums[i]);
            if (nums[abs_n-1] < 0) {
                res.push_back(abs_n);
            } else {
                nums[abs_n-1] = -nums[abs_n-1];
            }
        }
        return res;
    }
};

int main() {

    return 0;
}