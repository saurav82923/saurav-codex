struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  int su(Node *root){
        if(root == NULL)
            return 0;
        int lef=su(root->left);
        int rig=su(root->right);
        return lef+rig+root->data;
    }
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        if(node == NULL)
            return;
        int left=su(node->left);
        int right=su(node->right);
        node->data=left + right;
        toSumTree(node->left);
        toSumTree(node->right);
    }
};