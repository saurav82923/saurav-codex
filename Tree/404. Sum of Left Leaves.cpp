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
    void solve(TreeNode* &root,int &s){
        if(!root)
            return;
        if(root->left != NULL && root->left->left== NULL && root->left->right == NULL) {
            s=s+ root->left->val;
            
        }
        solve(root->left,s);
        solve(root->right,s);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s=0;
        solve(root,s);
        return s;
    }
};