#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int length = num.length();
        if (length == k) return "0";
        stack<char> st;
        for (char c : num) {
            while (!st.empty() && k > 0 && c < st.top()) {
                st.pop();
                k--;
            }
            if (st.empty() && c == '0') continue;
            st.push(c);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string ans = "";
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans.length() != 0 ? ans : "0";
    }
};

int main() {
    return 0;
}