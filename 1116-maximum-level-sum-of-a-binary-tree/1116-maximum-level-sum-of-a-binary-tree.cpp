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
    int maxLevelSum(TreeNode* root) {
        vector<int> v;
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int mx=INT_MIN;
        while(!q.empty()){
            int s=q.size();
            int sum=0;
            for(int i=0;i<s;i++){
            TreeNode* t= q.front();
            q.pop();
            sum+=t->val;
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            }
            v.push_back(sum);
            mx=max(sum,mx);
        }
        for(int i=0;i<v.size();i++){
            if(mx==v[i]) return i+1;
        }
        return 0;
    }
};