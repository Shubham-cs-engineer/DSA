
class Solution {
public:
    bool fun(vector<vector<int>>& grid, int r, int c) {
        int m = grid.size();
        int n = grid[0].size();

        if (r < 0 || r >= m || c < 0 || c >= n)
            return false;

        if (grid[r][c] == 1)
            return true;

        grid[r][c] = 1;

        bool left = fun(grid, r, c - 1);
        bool right = fun(grid, r, c + 1);
        bool up = fun(grid, r - 1, c);
        bool down = fun(grid, r + 1, c);

        return left && right && up && down;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    if (fun(grid, i, j) == true) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};
