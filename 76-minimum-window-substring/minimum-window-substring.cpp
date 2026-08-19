class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if (m > n || m == 0) return "";

        unordered_map<char,int> freq_s, freq_t;
        for (char c : t) freq_t[c]++;

        int required = freq_t.size(); // number of distinct chars needed
        int formed = 0;

        int i = 0, j = 0;
        int bestLen = INT_MAX, bestStart = 0;

        while (j < n) {
            char c = s[j];
            freq_s[c]++;

            if (freq_t.count(c) && freq_s[c] == freq_t[c]) {
                formed++;
            }

            // try to shrink while window is valid
            while (formed == required && i <= j) {
                if (j - i + 1 < bestLen) {
                    bestLen = j - i + 1;
                    bestStart = i;
                }

                char k = s[i];
                freq_s[k]--;
                if (freq_t.count(k) && freq_s[k] < freq_t[k]) {
                    formed--;
                }
                i++;
            }

            j++;
        }

        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};