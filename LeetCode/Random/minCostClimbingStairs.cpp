#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int* tab = new int[n + 1];

        for (int i = 0; i < n + 1; i++) tab[i] = INT_MAX;

        tab[0] = 0;
        tab[1] = 0;

        for (int i = 0; i < n + 1; i++){
            if (i + 1 < n + 1) tab[i + 1] = min(tab[i + 1], tab[i] + cost[i]);
            if (i + 2 < n + 1) tab[i + 2] = min(tab[i + 2], tab[i] + cost[i]);
        }

        return tab[n];

    }
};