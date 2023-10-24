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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int mx=INT_MIN;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* t = q.front();
                mx=max(mx,t->val);
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                
            }
            ans.push_back(mx);
        }
        return ans;
    }
};