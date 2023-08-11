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
    int height(TreeNode *root){
        if(root == NULL)
            return 0;
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int a1=diameterOfBinaryTree(root -> left);
        int a2=diameterOfBinaryTree(root->right);
        int a3 = height(root->left)+height(root->right);
        return max(a1,max(a2,a3));
    }
};



                    OR


 diameterOfBinaryTreeclass Solution {
public:
    pair<int,int> diameter(TreeNode *root){
        if(root == NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        pair<int,int> left=diameter(root->left);
        pair<int,int> right=diameter(root->right);
        int a1=left.first;
        int a2=right.first;
        int a3 = left.second +right.second;
        pair<int,int> ans;
        ans.first=max(a1,max(a2,a3));
        ans.second=max(left.second , right.second)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
         return diameter(root).first;
    }
};