#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = 1, length = nums.size();
        for (int i = 0; i < length; i++) {
            if (nums[i] == min) {
                min++;
            }
        }
        return min;
    }
};

int main() {
    return 0;
}