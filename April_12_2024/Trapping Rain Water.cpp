#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int length = height.size();
        if (length <= 2) return 0;
        int left = 0, right = length - 1, ans = 0;
        while (height[left] == 0 && left < length) left++;
        while (height[right] == 0 && right >= 0) right--;
        int left_max = height[left];
        int right_max = height[right];
        while (left < right) {
            if (left_max <= right_max) {
                ans = ans + left_max - height[left++];
                left_max = max(left_max, height[left]);
            } else {
                ans = ans + right_max - height[right--];
                right_max = max(right_max, height[right]);
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}