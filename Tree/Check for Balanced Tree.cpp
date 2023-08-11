
class Solution{
    public:
    int height( Node* node){
        // code here 
        if(node == NULL)
         return 0;
        int left = height(node->left);
        int right = height(node->right);
        return max(left , right) +1;
        
        
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root == NULL)
            return true;
        bool left = isBalanced(root->left);
         bool right = isBalanced(root->right);
         bool condition  =  abs(height(root->left) - height(root->right)) <=1;
         if(left && right && condition)
            return true;
        else
            return false;
    }
};