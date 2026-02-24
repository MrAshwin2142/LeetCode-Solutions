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
    void dfs(TreeNode* root,int num,vector<int> &v){
        num=num*2 + root->val;
        if(!root->left && !root->right) {
            v.push_back(num);
        }
        if(root->right) dfs(root->right,num,v);
        if(root->left) dfs(root->left,num,v);
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int> v;
        int num=0;
        int ans=0;
        dfs(root,num,v);
        for(int i:v) ans+=i;
        return ans;
    }
};