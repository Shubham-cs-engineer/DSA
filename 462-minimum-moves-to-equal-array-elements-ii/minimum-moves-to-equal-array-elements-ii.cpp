class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int tot = accumulate(nums.begin(), nums.end(), 0);

        int csm = 0;
        int med = nums[n/2];
        
        int ans = 0;
        for (auto x : nums) ans+=abs(med - x);
        return ans;
    }
};