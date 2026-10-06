class Solution {
public:
int sum(int x){
      if(x<=0) return 0;
      return x%10+sum(x/10);
}
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=sum(nums[i]);
            if(n==i)return i;
        }
        return -1;
    }
};