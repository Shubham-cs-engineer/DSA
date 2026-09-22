class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        int indx = n - k;
        vector<int> ans;

        for (int i = indx; i < n; i++) {
            ans.push_back(nums[i]);
        }

        for (int i = 0; i < indx; i++) {
            ans.push_back(nums[i]);
        }

        nums = ans;
    }
};