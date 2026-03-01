class Solution {
public:
    void findCombinations(vector<int>& candidates, int i, int target, vector<vector<int>>& ans, vector<int>& combinations) {
        if(target < 0 || i == candidates.size()) return;
        if(target == 0) {
            ans.push_back(combinations);
            return;
        }

        if(candidates[i] <= target) {
            combinations.push_back(candidates[i]);
            findCombinations(candidates, i, target-candidates[i], ans, combinations);
            combinations.pop_back();
        }        

        findCombinations(candidates, i+1, target, ans, combinations);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combinations;

        findCombinations(candidates, 0, target, ans, combinations);

        return ans;
    }
};