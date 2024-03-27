#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int length = nums.size();
        //sort(nums.begin(), nums.end());
        int left = 0, right = 0, product = 1, res = 0;
        while (right < length) {
            product = product * nums[right];
            while (product >= k) {
                product = product / nums[left++];
            }
            res += 1 + right - left;
            right++;
        }
        return res;
    }
};

int main() {
    return 0;
}