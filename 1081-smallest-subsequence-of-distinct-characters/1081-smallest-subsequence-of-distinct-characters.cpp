class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> count(26, 0);       // frequency of each character
        vector<bool> inStack(26, false); // track if character is already in result

        for (char c : s) count[c - 'a']++;

        string result;
        for (char c : s) {
            count[c - 'a']--;

            // if already in result, skip
            if (inStack[c - 'a']) continue;

            // maintain lexicographic order
            while (!result.empty() && result.back() > c && count[result.back() - 'a'] > 0) {
                inStack[result.back() - 'a'] = false;
                result.pop_back();
            }

            result.push_back(c);
            inStack[c - 'a'] = true;
        }
        return result;
    }
};
