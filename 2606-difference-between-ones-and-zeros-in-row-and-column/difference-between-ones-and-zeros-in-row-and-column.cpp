#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> row(m, 0);
        vector<int> column(n, 0);
        vector<vector<int>> diff(m, vector<int>(n, 0));
    
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) {
                    row[i]--;
                    column[j]--;
                } else if(grid[i][j] == 1) {
                    row[i]++;
                    column[j]++;
                }
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                diff[i][j] = row[i] + column[j];
            }
        }

        return diff;
    }
};
