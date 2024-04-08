#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int length = students.size();
        int one = 0, zero = 0;
        for (int i = 0; i < length; i++) {
            if (students[i] == 0) {
                zero++;
            } else {
                one++;
            }
        }
        for (int i = 0; i < length; i++) { 
            if (sandwiches[i] == 0) {
                if (zero == 0) {
                    return one;
                } else {
                    zero--;
                }
            } else {
                if (one == 0) {
                    return zero;
                } else {
                    one--;
                }
            }
        }
        return one;
    }
};

int main() {
    return 0;
}