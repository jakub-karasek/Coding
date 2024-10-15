#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        long long* arr = new long long[n];
        long long bestSoFar = 0;

        for (int i = n - 1; i >= 0; i--) {
            int jump = questions[i][1];
            if (i + jump + 1 > n - 1) {
                arr[i] = max((long long)questions[i][0], bestSoFar);
            } else {
                arr[i] = max((long long)questions[i][0] + arr[i + jump + 1], bestSoFar);
            }
            bestSoFar = max(bestSoFar, arr[i]);
        }

        return arr[0];
    }
};