class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        // Your code here
        if(root == NULL)
            return 0;
        int left=maxDepth(root->left);
        int right= maxDepth(root->right);
        return max(left,right)+1;
    }
};