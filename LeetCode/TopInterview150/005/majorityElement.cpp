#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int n = nums.at(0);
        int i = 1;

        while (i < nums.size()){
            if (nums.at(i) == n) count++;
            else{
                count--;
                if (count == 0) {
                    n = nums.at(i);
                    count++;
                }
            }
            i++;
        }

        return n;
        
    }
};