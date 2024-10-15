#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();

        int* arr = new int[n + 1];
        arr[0] = 0;
        int w = 0;
        int m = 0;

        for (int i = 1; i < n + 1; i++){
            while (w + 1 < n + 1 && days[w] <= days[i - 1] - 7) w++;
            while (m + 1 < n + 1 && days[m] <= days[i - 1] - 30) m++;
            arr[i] = min(arr[i - 1] + costs[0], min(arr[w] + costs[1], arr[m] + costs[2]));
        }

        return arr[n];
    }
};