#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = 0;
        int total = 0;
        for (int i = 1; i < prices.size(); i++){
            int change = (prices.at(i) - prices.at(i - 1));
            if (change > 0) total += change;
        }
        return total;
    }
};