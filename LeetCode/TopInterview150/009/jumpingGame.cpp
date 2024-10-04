#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr = 0;
        
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > curr) curr = nums[i];
            if (i == nums.size() - 1 && curr >= 0) return true;
            if (curr <= 0) return false;
            curr--;
        }
        return true;
        
    }
};