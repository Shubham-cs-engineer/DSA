
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int mul = 1;
        int countzero = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                countzero++;
            } else {
                mul *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (countzero > 1) {
                ans[i] = 0;
            } 
            else if (countzero == 1) {
                if (nums[i] == 0) {
                    ans[i] = mul;
                }
            } 
            else {
                ans[i] = mul / nums[i];
            }
        }

        return ans;
    }
};