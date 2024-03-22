#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> stack;
        while (head) {
            stack.push_back(head->val);
            head = head->next;
        }
        int i = 0, j = stack.size() - 1;
        while (i < j) {
            if (stack[i] != stack[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main() {

    return 0;
}