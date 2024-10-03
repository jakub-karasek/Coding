#include <vector>

using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
    }

    void rotate(vector<int>& nums, int k) {
        if (k == 0) return;

        int size = nums.size();
        int numOfCycles = gcd(size, k);

        for (int i = 0; i < numOfCycles; i++){
            int start = i;
            int prev = nums.at(i);
            i = (i + k) % size;

            while (i != start){
                int temp = nums.at(i);
                nums.at(i) = prev;
                prev = temp;
                i = (i + k) % size;
            }

            nums.at(start) = prev;

        }
        
        
    }
};