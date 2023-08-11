class Solution {
public:
    void inorder(TreeNode* root,vector<int> &v){
        if(root == NULL)
            return ;
        inorder(root->left,v);
        v.push_back(root->val);
         inorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        inorder(root1,v);
        inorder(root2,v);
        sort(v.begin(),v.end());
        return v;

    }
};