class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;

        for (int i = 0; i < arr1.size(); i++) {
            bool flag = true;
            int j = 0;
            while (j < arr2.size()) {
                if (abs(arr1[i] - arr2[j]) <= d) {
                    flag = false;
                    break;
                }
                j++;
            }
            if (flag == true)
                ans++;
        }
        return ans;
    }
};