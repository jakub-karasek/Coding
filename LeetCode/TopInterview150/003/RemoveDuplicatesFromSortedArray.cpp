#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        int p = 1;
        int n = nums.size();

        while(p < n){
            if(nums.at(p) != nums.at(l - 1)){
                nums.at(l) = nums.at(p);
                l++;
            }
            p++;
        }

        return l;
        
    }
};