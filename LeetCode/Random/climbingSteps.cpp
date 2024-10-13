class Solution {
public:
    int climbStairs(int n) {
        int* tab = new int[n + 1];

        for (int i = 0; i < n + 1; i++) tab[i] = 0;

        tab[0] = 1;

        for (int i = 0; i < n + 1; i++){
            if (i + 1 < n + 1) tab[i + 1] += tab[i];
            if (i + 2 < n + 1) tab[i + 2] += tab[i];

        }

        return tab[n];
        
    }
};