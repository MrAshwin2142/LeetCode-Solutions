class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0, ans = 0;
        unordered_map<char, int> freq;

        for(int r = 0; r < s.size(); r++) {
            freq[s[r]]++;          // add right character to window

            while(freq[s[r]] > 2) { // if frequency exceeds 2, shrink from left
                freq[s[l]]--;
                l++;
            }

            ans = max(ans, r - l + 1); // update max length
        }

        return ans;
    }
};