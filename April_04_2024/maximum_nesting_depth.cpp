#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int length = s.length();
        int res = 0;
        for (int i = 0; i < length; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            }
            if (s[i] == ')') {
                st.pop();
            } 
            if (st.size() > res) {
                res = st.size();
            }
        }
        return res;
    }
};

int main() {
    return 0;
}