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
    
    void help(TreeNode* root,int &count){
        if(root==NULL) return;
        if(root->right!=NULL){
            count++;
            help(root->right,count);
        }
        if(root->left!=NULL){
            count++;
            help(root->left,count);
        }
    }
    
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int count=1;
        help(root,count);
        return count;
    }
};