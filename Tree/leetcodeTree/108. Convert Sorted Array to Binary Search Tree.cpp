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
  TreeNode* inordertobst(int s,int e,vector<int> &in){
        if(s>e)
            return NULL;
        int mid = (s+e)/2;
        TreeNode* root = new TreeNode(in[mid]);
        root -> left = inordertobst(s,mid-1,in);
        root -> right = inordertobst(mid+1,e,in);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& inorderval) {
        return inordertobst(0,inorderval.size()-1,inorderval);
    }
};