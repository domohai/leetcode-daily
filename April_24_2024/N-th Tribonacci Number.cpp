class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        vector<int> arr(n + 1, -1);
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        return recur(n, arr);
    } 
    int recur(int n, vector<int>& arr) {
        if (n <= 0) return arr[0];
        if (n == 1 || n == 2) return arr[1];
        if (arr[n] == -1)
            arr[n] = recur(n - 1, arr) + recur(n - 2, arr) + recur(n - 3, arr);
        return arr[n];
    }
};