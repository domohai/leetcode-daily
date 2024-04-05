#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        int length = s.length();
        if (length <= 1) return s;
        int distance = 'a' - 'A';
        stack<char> st;
        for (int i = 0; i < length; i++) {
            if (!st.empty() && abs(st.top() - s[i]) == distance) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        s = "";
        while (!st.empty()) {
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};

int main() {
    return 0;
}