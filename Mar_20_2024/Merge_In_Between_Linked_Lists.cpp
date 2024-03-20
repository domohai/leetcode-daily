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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* start = list1;
        ListNode* end = list1;
        int temp = b - a;
        while (temp--) {
            end = end->next;
        }
        int start_num = 0, end_num = b - a;

        while (start_num != (a - 1)) {
            start_num++;
            end_num++;
            start = start->next;
            end = end->next;
        }
        end = end->next;
        start->next = list2;
        if (end->next != NULL) {
            ListNode* end_list2 = list2;
            while (end_list2->next != NULL) {
                end_list2 = end_list2->next;
            }
            end_list2->next = end->next;
        }
        return list1;
    }
};

int main() {

    return 0;
}

