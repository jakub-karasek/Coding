#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m - 1;
        int p = n - 1;
        int s = n + m - 1;

        while (l >= 0 && p >= 0)
        {
            if (nums1.at(l) >= nums2.at(p)){
                nums1.at(s) = nums1.at(l);
                s--;
                l--;
            }
            else{
                nums1.at(s) = nums2.at(p);
                s--;
                p--;
            }
        }

        if (p >= 0){
            for (int i = 0; i <= p; i++){
                nums1.at(i) = nums2.at(i);
            }
        }

        return;
        }
};