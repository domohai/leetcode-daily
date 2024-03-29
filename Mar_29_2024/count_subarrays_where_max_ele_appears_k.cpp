#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int length = nums.size();
        int max = nums[0];
        for (int i = 1; i < length; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        long long left = 0, right = 0, count = 0, res = 0;
        while (right < length) {
            while (count < k && right < length) {
                if (nums[right] == max) {
                    count++;
                }
                right++;
            }
            while (count >= k) {
                res = res + length - right + 1;
                if (nums[left] == max) count--;
                left++;
            }
        }
        return res;
    }
};

int main() {
    return 0;
}