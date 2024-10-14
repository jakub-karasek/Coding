#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        int* arr = new int[n];

        arr[0] = nums[0];

        bool lastTaken;
        
        if (nums[0] > nums[1]){
            arr[1] = nums[0];
            lastTaken = false;
        } else{
            arr[1] = nums[1];
            lastTaken = true;
        }

        for (int i = 2; i < n; i++){
            if (lastTaken){
                if (arr[i - 1] > arr[i - 2] + nums[i]){
                    lastTaken = false;
                    arr[i] = arr[i - 1];
                } else {
                    arr[i] = arr[i - 2] + nums[i];
                }
            } else {
                arr[i] = arr[i - 1] + nums[i];
                lastTaken = true;
            }
        }

        return arr[n - 1];
    }
};