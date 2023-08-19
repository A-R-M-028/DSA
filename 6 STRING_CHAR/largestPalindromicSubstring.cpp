class Solution {
    //not submitted as giving error 
    //do it by dp as here t.c is o(n^3)
public:
    bool isPalindrome(string &str, int i, int j) {
        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < s.size(); j++) {
                if (isPalindrome(s, i, j)) {
                    string t = s.substr(i, j - i + 1);
                    ans = t.size() > ans.size() ? t : ans;
                }
            }
        }
        return ans;
    }
};
