#include <bits/stdc++.h>

using namespace std;

/**
 * @brief 
 * Approach 2: Slow and fast pointer
The key intuition behind this method is that if there's a cycle in the linked list, the fast and slow pointers will eventually meet.
We treat the array as a linked list, where the index represents the node and the value at that index represents the next node.
Using the fast-slow pointers technique, we traverse the linked list.
The slow pointer moves one step at a time while the fast pointer moves two steps at a time.
If there's a cycle in the linked list (indicating a duplicate number), the fast and slow pointers will eventually meet.
After identifying the meeting point, we reset the slow pointer to the start and move both pointers at the same pace until they meet a
 */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0;
        int res = 0;
        slow = nums[0];
        fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};

int main() {

    return 0;
}