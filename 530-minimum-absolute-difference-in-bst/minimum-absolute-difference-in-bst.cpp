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
    void dfs(TreeNode* root, vector<int>&v){
        if(root==NULL) return;
        v.push_back(root->val);
        if(root->left) dfs(root->left,v);
        if(root->right) dfs(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
         vector<int> v;
        // return mn;
        dfs(root,v);
        sort(v.begin(),v.end());
        int mn=INT_MAX,n=v.size();
        for(int i=0;i<n-1;i++){
            mn=min(mn,v[i+1]-v[i]);
        }
        return mn;
    }
};