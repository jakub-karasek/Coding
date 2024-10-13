class Solution {
public:
    int numSquares(int n) {
        int* tab = new int[n + 1];

        for (int i = 1; i < n + 1; i++){
            if (static_cast<int>(sqrt(i)) * static_cast<int>(sqrt(i)) == i) tab[i] = 1;
            else {
                int best = i;
                for (int j = 1; j < sqrt(i); j++){
                    best = min(best, tab[i - (j*j)] + 1);
                }
                tab[i] = best;
            }
        }

        return tab[n];
    }
};