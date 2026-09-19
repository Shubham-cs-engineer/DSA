class Solution {
public:
    int fun(vector<int>& nums, int i, int n, int free,
            vector<vector<int>>& dp) {
        if (i == n)
            return 0;
        if (dp[i][free] != -1) {
            return dp[i][free];
        }
        int c1 = 0;
        if (free == 1) {
            c1 = nums[i] + fun(nums, i + 1, n, 0, dp);
        }
        int c2 = fun(nums, i + 1, n, 1, dp);
        return dp[i][free] = max(c1, c2);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, -1));
        return fun(nums, 0, n, 1, dp);
    }
};