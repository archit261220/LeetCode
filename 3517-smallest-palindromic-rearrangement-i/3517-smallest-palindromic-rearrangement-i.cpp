class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string res = s.substr(0, n/2); // first half

        // Sort only once
        sort(res.begin(), res.end());

        string ans = res;
        reverse(ans.begin(), ans.end());

        if (n % 2 == 0) {
            return res + ans;
        } else {
            return res + s[n/2] + ans;
        }
    }
};
