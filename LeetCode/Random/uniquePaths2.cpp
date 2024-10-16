#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int arr[m][n];

        arr[0][0] = 1;
        if (obstacleGrid[0][0] == 1) return 0;

        for (int i = 1; i < max(n,m); i++){
            if (i < n){
                if (obstacleGrid[0][i] == 1) arr[0][i] = 0;
                else arr[0][i] = arr[0][i - 1];
            }
            if (i < m){
                if (obstacleGrid[i][0] == 1) arr[i][0] = 0;
                else arr[i][0] = arr[i - 1][0];
            }
        }

        for (int y = 1; y < m; y++){
            for (int x = 1; x < n; x++){
                if (obstacleGrid[y][x] == 1) arr[y][x] = 0;
                else arr[y][x] = arr[y][x - 1] + arr[y - 1][x];
            }
        }

        return arr[m - 1][n - 1];
        
    }
};