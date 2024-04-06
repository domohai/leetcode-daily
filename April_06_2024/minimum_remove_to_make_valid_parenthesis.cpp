#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res = "";
        int length = s.length();
        int open = 0, close = 0, mark = 0;
        for (int i = 0; i < length; i++) {
            if (s[i] == '(') { 
                open++;
                mark++;
            } 
            if (s[i] == ')' && mark > 0) {
                close++;
                mark--;
            }
        }
        int k = min(open, close);
        close = k;
        open = k;
        for (char c : s) {
            if (c == '(') {
                if (open > 0) {
                    res.push_back(c);
                    open--;
                }
            } else if (c == ')') {
                if (close > open && close > 0) {
                    res.push_back(c);
                    close--;
                }
            } else {
                res.push_back(c);
            }
        }
        return res;
    }
};

int main() {
    return 0;
}
