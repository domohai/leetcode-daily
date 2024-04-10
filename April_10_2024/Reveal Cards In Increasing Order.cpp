#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int length = deck.size();
        sort(deck.begin(), deck.end());
        deque<int> dq;
        dq.push_back(deck[length-1]);
        for (int i = length-2; i >= 0; i--) {
            int temp = dq.back();
            dq.pop_back();
            dq.push_front(temp);
            dq.push_front(deck[i]);
        }
        vector<int> ans;
        for (int i = 0; i < dq.size(); i++) {
            ans.push_back(dq[i]);
        }
        return ans;
    }
};

int main() {
    return 0;
}