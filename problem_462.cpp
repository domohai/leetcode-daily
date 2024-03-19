#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int minMoves2(vector<int>& nums) {
    int len = nums.size(), average, ans = 0;
        sort(nums.begin(), nums.end());
        average = nums[len / 2];
        for (int i = 0; i < len; i++) {
            ans += abs(average - nums[i]);
        }
        return ans;
}

int main() {
    vector <int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    cout << minMoves2(nums);
    return 0;
}