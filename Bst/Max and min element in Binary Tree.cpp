class Solution
{
public:
    int findMax(Node *root)
    {
        //code here
      
     if( root == NULL)
        return -1;
    Node* temp = root;
    while(temp->right  != NULL)
        temp = temp -> right;
    return temp->data;

    }
    int findMin(Node *root)
    {
        //code here
       
     if( root == NULL)
        return -1;
    Node* temp = root;
    while(temp->left  != NULL)
        temp = temp -> left;
    return temp->data;

    }
};