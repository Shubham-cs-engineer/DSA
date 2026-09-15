class Solution {
public:
    int fun(vector<int>& cost, int i, int n, vector<int>& dp) {
        if (i >= n)
            return 0;

        if (dp[i] != -1)
            return dp[i];
        return dp[i] = cost[i] +  min(fun(cost, i + 1, n, dp), fun(cost, i + 2, n, dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        return min(fun(cost, 0, n, dp), fun(cost, 1, n, dp));
    }
};