using namespace std;

class Solution {
public:
    long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;  
    if (k == 0 || k == n) return 1;  

    if (k > n - k) {
        k = n - k;
    }

    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);  
        result /= (i + 1);  
    }

    return result;
    }

    int uniquePaths(int m, int n) {
        return binomialCoefficient(n + m - 2, m - 1);
        
    }
};