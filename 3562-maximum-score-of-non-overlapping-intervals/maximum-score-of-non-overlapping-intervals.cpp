class Solution {
    struct IntervalData {
        int end, start, weight, originalIndex;
        // Used for sorting and lower_bound comparisons
        bool operator<(const IntervalData& other) const {
            return end < other.end;
        }
    };

public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<IntervalData> sortedIntervals;
        
        for (int i = 0; i < n; ++i) {
            sortedIntervals.push_back({intervals[i][1], intervals[i][0], intervals[i][2], i});
        }
        sort(sortedIntervals.begin(), sortedIntervals.end());
        
        // dp[i][j] stores a pair: {-max_weight, lexicographically_smallest_indices}
        vector<vector<pair<long long, vector<int>>>> dp(n + 1, vector<pair<long long, vector<int>>>(5, {0LL, {}}));
        
        for (int i = 0; i < n; ++i) {
            int start = sortedIntervals[i].start;
            int weight = sortedIntervals[i].weight;
            int originalIndex = sortedIntervals[i].originalIndex;
            
            // lower_bound finds the first interval whose end >= current start
            IntervalData target = {start, 0, 0, 0}; 
            int k = lower_bound(sortedIntervals.begin(), sortedIntervals.begin() + i, target) - sortedIntervals.begin();
            
            for (int j = 1; j <= 4; ++j) {
                long long prevWeight = dp[k][j - 1].first;
                vector<int> prevIndices = dp[k][j - 1].second;
                
                pair<long long, vector<int>> skip = dp[i][j];
                
                vector<int> takeIndices = prevIndices;
                takeIndices.push_back(originalIndex);
                sort(takeIndices.begin(), takeIndices.end());
                
                pair<long long, vector<int>> take = {prevWeight - weight, takeIndices};
                
                // min() naturally prioritizes the lowest (most negative) weight sum, 
                // then lexicographically smallest sorted indices
                dp[i + 1][j] = min(skip, take);
            }
        }
        
        return dp[n][4].second;
    }
};