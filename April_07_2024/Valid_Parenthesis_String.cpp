#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        if (s.length() == 1) return s[0] == '*'? true : false;
        int open = 0, close = 0;
        for (char c : s) {
            if (c == ')') {
                if (open > 0) {
                    open--;
                } else {
                    return false;
                }
            } 
            if (c == '(' || c == '*') {
                open++;
            }
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') { 
                if (close > 0) {
                    close--;
                } else {
                    return false;
                }
            }
            if (s[i] == ')' || s[i] == '*') {
                close++;
            }
        }
        return true;
    }
};

int main() {
    return 0;
}