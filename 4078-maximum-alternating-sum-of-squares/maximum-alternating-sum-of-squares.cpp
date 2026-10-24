class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long ansSmall = 0;
        long long ansBig = 0;

        for (int i = 0; i < n; i++) {
            if (i < n / 2)
                ansSmall += nums[i] * nums[i];
            else
                ansBig += nums[i] * nums[i];
        }
        return ansBig - ansSmall;
    }
};