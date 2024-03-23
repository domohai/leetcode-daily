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
    void reorderList(ListNode* head) {
        ListNode* half = head;
        ListNode* end = head;
        while (end->next != NULL && end->next->next != NULL) {
            end = end->next->next;
            half = half->next;
        }
        if (end->next != NULL) {
            half = half->next;
        }
        ListNode* prev = NULL;
        while (half != NULL) {
            end = half->next;
            half->next = prev;
            prev = half;
            half = end;
        }

        half = prev;
        
        while (head != NULL && half != NULL) {
            end = head->next;
            prev = half->next;
            head->next = half;
            half->next = end;
            
            head = end;
            half = prev;
        }
        if (head && head->next) head->next->next = NULL;
    }
};