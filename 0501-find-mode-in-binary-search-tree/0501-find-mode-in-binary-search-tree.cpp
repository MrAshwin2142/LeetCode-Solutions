/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void dfs(TreeNode*root, map<int,int>&mp){
        if(!root) return;
        mp[root->val]++;
        if(root->right) dfs(root->right,mp);
        if(root->left) dfs(root->left,mp);
    }

    vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        map<int,int> mp;
        dfs(root,mp);
        vector<int> ans;
        int mx=0;
        for(auto i:mp){
            mx=max(mx,i.second);
        }
        for(auto i:mp){
            if(mx==i.second) ans.push_back(i.first);
        }
        return ans;
    }
};