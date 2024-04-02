#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int length = s.length();
        unordered_map<char, char> mp;
        for (int i = 0; i < length; i++) {
            if (mp.count(s[i]) == 1) {
                if (mp[s[i]] != t[i]) {
                    return false;
                }
            } else {
                for (auto j : mp) {
                    if (j.second == t[i]) {
                        return false;
                    }
                }
                mp[s[i]] = t[i];
                
            }
        }
        return true;

    }
};

int main() {
    return 0;
}