class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
     int maxDepth(Node* root) {
        if(root == NULL)
            return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left , right) +1;
    }
    int diameter(Node* root) {
        // Your code here
        if(root == NULL)
            return 0;
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = maxDepth(root->left)+ 1+ maxDepth(root->right);
        return max(op1,max(op2,op3) );
    }
};