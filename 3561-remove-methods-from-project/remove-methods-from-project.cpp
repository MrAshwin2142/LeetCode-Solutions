class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> edges(n);
        vector<bool> sus(n, false);
        for (auto& e : invocations) {
            edges[e[0]].push_back(e[1]);
        }

        // Mark all methods reachable from k as suspicious
        queue<int> q;
        q.push(k);
        sus[k] = true;
        while (!q.empty()) {
            int f = q.front();
            q.pop();
            for (int nxt : edges[f]) {
                if (!sus[nxt]) {
                    sus[nxt] = true;
                    q.push(nxt);
                }
            }
        }

        // Check: does any non-suspicious method call a suspicious one?
        for (auto& e : invocations) {
            int u = e[0], v = e[1];
            if (!sus[u] && sus[v]) {
                // Invalid removal, return everything
                vector<int> all(n);
                iota(all.begin(), all.end(), 0);
                return all;
            }
        }

        // Valid removal: return all non-suspicious methods
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!sus[i]) ans.push_back(i);
        }
        return ans;
    }
};