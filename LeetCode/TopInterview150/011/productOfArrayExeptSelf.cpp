#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> beg(nums.size());
        vector<int> end(nums.size());

        int beg_sum = 1;
        int end_sum = 1;

        for (int i = 0; i < nums.size(); i++) {
            int endIndex = nums.size() - i - 1;

            beg_sum *= nums[i];
            end_sum *= nums[endIndex];

            beg[i] = beg_sum;
            end[i] = end_sum;
        }
        vector<int> answer(nums.size());

        answer[0] = end[0];
        answer[nums.size() - 2] = beg[nums.size() - 1];

        for (int i = 1; i < nums.size() - 1; i++){
            answer[i] = end[i - 1] * beg[i + 1];
        }

        return answer;
    }



};
