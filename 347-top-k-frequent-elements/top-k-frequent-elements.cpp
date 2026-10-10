class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int x : nums) {
            mp[x]++;
        }

        while (k > 0) {
            int maxfreq = 0;
            int num = 0;
            for (auto it : mp) {
                if (it.second > maxfreq) {
                    maxfreq = it.second;
                    num = it.first;
                }
            }
            ans.push_back(num);
            mp.erase(num);
            k--;
        }

        return ans;
    }
};