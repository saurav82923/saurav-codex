class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
        bool checkbst(Node* root ,int min,int max){
            
        if(root == NULL)
            return true;
        if(root -> data >= min && root -> data <= max){
            bool left = checkbst(root -> left , min,root->data);
            bool right = checkbst(root -> right,root ->data ,max);
            return left && right;
        }
        else
        return false;
        }
    bool isBST(Node* root) 
    {
        // Your code here
        return checkbst(root,INT_MIN,INT_MAX);
    }
};