class Solution
{
    public:
     void inorder(Node *root,vector<int> &ans){

        if(root){

            inorder(root->left,ans);

            ans.push_back(root->data);

            inorder(root->right,ans);

        }

    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int> v;
        inorder(root,v);
        return v[v.size()-K];
    }
};