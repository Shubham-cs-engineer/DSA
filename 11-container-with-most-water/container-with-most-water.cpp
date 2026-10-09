class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int ma = INT_MIN;
        while (left < right) {
            ma = max(ma,
                     abs((left - right) * (min(height[left], height[right]))));
            if (height[left] < height[right])
                left++;
            else if (height[left] > height[right])
                right--;
            else {
                left++;
                right--;
            }
        }
        return ma;
    }
};