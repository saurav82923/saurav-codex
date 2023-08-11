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
    int su(TreeNode *root){
        if(root == NULL)
            return 0;
        int lef=su(root->left);
        int rig=su(root->right);
        return lef+rig+root->val;
    }
    bool checkTree(TreeNode* root) {
        if(root == NULL)
            return true;
        int leftSum=su(root->left);
        int rightSum=su(root->right);
        if(root-> val != leftSum + rightSum)
            return false;
        return true;
        
    }
};