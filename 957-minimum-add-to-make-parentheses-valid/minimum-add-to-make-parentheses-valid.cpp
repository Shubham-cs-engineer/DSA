class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        stack<int>st;
        for(char c:s){
            if(c=='('){
                st.push(c);
                ans+=1;
            }
            if(c==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    ans-=1;
                }
                else {
                    st.push(c);
                    ans+=1;
                }
            }
        }
        return ans;
    }
};