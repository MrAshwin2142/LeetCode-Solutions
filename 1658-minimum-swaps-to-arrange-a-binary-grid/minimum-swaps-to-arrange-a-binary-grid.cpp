class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = 1;
        while (size < n) size <<= 1;

        // maxT stores max trailing zeros in range;
        // sumT tracks count of active rows
        vector<int> maxT(size << 1, -1);
        vector<int> sumT(size << 1, 0);

        for (int i = 0; i < n; i++) {
            int trail = 0;
            for (int j = n - 1; j >= 0 && grid[i][j] == 0; j--) trail++;
            maxT[size | i] = trail;
            sumT[size | i] = 1;
        }

        // Build tree: O(n)
        for (int i = size - 1; i > 0; i--) {
            maxT[i] = max(maxT[i << 1], maxT[(i << 1) | 1]);
            sumT[i] = sumT[i << 1] + sumT[(i << 1) | 1];
        }

        int swap = 0;
        for (int i = 0; i < n; i++) {
            int req = n - 1 - i;
            if (maxT[1] < req) return -1; // No row satisfies the condition

            int idx = 1;
            // Greedy search for the first available row with enough zeros: O(log n)
            while (idx < size) {
                if (maxT[idx << 1] >= req) {
                    idx <<= 1;
                } else {
                    // Skip the left subtree, add its active row count to swaps
                    swap += sumT[idx << 1];
                    idx = (idx << 1) | 1;
                }
            }

            // Mark row as deleted by resetting values
            maxT[idx] = -1;
            sumT[idx] = 0;
            
            // Update ancestors: O(log n)
            for (int p = idx >> 1; p > 0; p >>= 1) {
                maxT[p] = max(maxT[p << 1], maxT[(p << 1) | 1]);
                sumT[p] = sumT[p << 1] + sumT[(p << 1) | 1];
            }
        }

        return swap;
    }
};
