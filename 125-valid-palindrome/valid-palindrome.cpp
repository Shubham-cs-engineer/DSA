class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
     
        string ans = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                ans += tolower(c);
            } else if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z') {
                ans += c;
            } else {
                continue;
            }
        }
        int right = ans.size() - 1;

        while (left < right) {
            if (ans[left] != ans[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};