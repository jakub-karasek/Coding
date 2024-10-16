#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int arr[m][n];

        arr[0][0] = grid[0][0];

        for (int i = 1; i < max(n,m); i++){
            if (i < n){
                arr[0][i] = arr[0][i - 1] + grid[0][i];
            }
            if (i < m){
                arr[i][0] = arr[i - 1][0] + grid[i][0];
            }
        }

        for (int y = 1; y < m; y++){
            for (int x = 1; x < n; x++){
                arr[y][x] = min(arr[y - 1][x], arr[y][x - 1]) + grid[y][x];
            }
        }

        return arr[m - 1][n - 1];
    }
};