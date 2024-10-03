#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = 0;
        int record = 0;
        for (int i = 1; i < prices.size(); i++){
            curr += (prices.at(i) - prices.at(i - 1));
            if (curr < 0) curr = 0;
            if (curr > record) record = curr;
        }
        return record;
        
    }
};