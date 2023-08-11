/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
void inorder(Node* node,int &size){
    if(node == NULL){
        return;
    }
    inorder(node->left,size);
    size++;
    inorder(node->right,size);
}
int getSize(Node* node)
{
   // Your code here
   int size=0;
   inorder(node,size);
   return size;
}