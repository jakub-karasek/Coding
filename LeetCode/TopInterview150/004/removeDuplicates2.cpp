#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 2;
        int p = 2;
        int n = nums.size();

        if (n <= 2)
            return n;

        int pop1 = nums.at(0);
        int pop2 = nums.at(1);

        while (p < n) {
            if (nums.at(p) != pop1 || nums.at(p) != pop2) {
                pop1 = pop2;
                pop2 = nums.at(p);
                nums.at(l) = nums.at(p);
                l++;
            }
            p++;
        }

        return l;
    }
};