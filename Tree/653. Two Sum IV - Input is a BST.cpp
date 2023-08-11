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
    bool target(TreeNode* root, int k, unordered_set<int> &st){
        if(!root){
            return false;
        }
        int val = root->val;
        if(st.find(k-val) != st.end()){
            return true;
        }
        st.insert(val);
       bool a= target(root->left, k, st);
        bool b=target(root->right, k, st);
    //    if(st.find(k-val) == st.end()){
    //         return false;
    //     }
        return a|| b;
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> st;
        return target(root, k, st);
    }
};