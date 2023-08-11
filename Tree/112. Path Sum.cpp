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
    void  solve(TreeNode* &root,int sum,int &sum1,bool &v){
        if(root == NULL || v)
            return ;
            sum =sum+ root->val;
            if(root->left == NULL &&  root->right == NULL &&sum == sum1){
                v=true;
                return;
            }
        
        solve(root->left,sum,sum1,v);
        
        solve(root->right,sum,sum1,v);
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool v=false;
        int sum=0;
          solve(root,sum,targetSum,v);
          return v;
    }
};