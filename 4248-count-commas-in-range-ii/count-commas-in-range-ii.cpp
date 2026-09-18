class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;

        long long mult=1000;
        long long commas=0;
        while(n>=mult){
            commas+=n-mult;
            commas+=1;
            mult*=1000;
        }
        return commas;
    }
};