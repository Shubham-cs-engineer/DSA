class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        vector<int>ones;
        while(n>0){
          ones.push_back(n%2);
          n/=2;
        }
        for(int i=0;i<ones.size();i++){
            if(ones[i]==1)ans++;
        }
        return ans;
    }
};