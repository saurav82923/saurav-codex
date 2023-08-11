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
    void inorder(TreeNode* &root,vector<int>& v){
        if(root == NULL)
            return;
        inorder(root->left,v);
            v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* buildtree(TreeNode* &root1,int &a){
        if(root1 == NULL){
             root1= new TreeNode(a);
            return root1;
        }
        // root->left=NULL;
        root1->right= buildtree(root1->right,a);
        return root1;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        TreeNode* root1=NULL;
        for(auto i:v)
        root1=    buildtree(root1,i);
        return root1;
    }
};