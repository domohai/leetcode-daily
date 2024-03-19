#include <bits/stdc++.h>

using namespace std;

int main() {

    return 0;
}

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int length = tasks.size();
        if (n == 0) return length;
        priority_queue<int> pq;
        vector<int> vt(26, 0);

        for (int i = 0; i < length; i++) {
            vt[tasks[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++) {
            if (vt[i] != 0) pq.push(vt[i]);
        }
        int time = 0;
        while (!pq.empty()) {
            vector<int> task_left;
            int slots = n + 1;
            while (slots > 0 && !pq.empty()) {
                int task = pq.top();
                pq.pop();
                if (task > 1) task_left.push_back(task - 1);
                time++;
                slots--;
            }
            for (int i = 0; i < task_left.size(); i++) pq.push(task_left[i]);
            if (pq.empty()) break;
            time += slots;
        }
        return time;
    }
};