#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkH(vector<int> citations, int length, int h){
        int counter = 0;
        for (int i = 0; i < length; i++){
            if (citations.at(i) >= h) counter++;
            if (counter >= h) return true;
        }

        return false;
    }

    int hIndex(vector<int>& citations) {
        int length = citations.size();
        int l = 0;
        int p = length;

        while (l < p){
            int s = ((l + p) / 2) + 1;
            if (checkH(citations, length, s)){
                l = s;
            }
            else {
                p = s - 1;
            }
        }

        return l;

        
    }
};