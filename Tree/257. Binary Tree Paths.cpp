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
    void traversal(TreeNode* root,vector<string> &res,string str){
        if(root==NULL) return;
        if(root->left || root->right){
        string s=to_string(root->val)+"->";
       str+=(s);
        }
       if(root->left==NULL && root->right==NULL){
           str+=to_string(root->val);
           res.push_back(str);
           return;
       }
        traversal(root->left,res,str);
        traversal(root->right,res,str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string> v;
      string s=""  ;
      traversal(root,v,s);
      return v;
    }
};