#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p = nums.size() - 1;
        int i = p;

        while (i >= 0){
            if (nums.at(i) == val){
                int temp = nums.at(i);
                nums.at(i) = nums.at(p);
                nums.at(p) = temp;
                p--;

            }
            i--;
        }

        return p + 1;
        
    }
};