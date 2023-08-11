Node* insert(Node* root, int Key) {
    // Your code here
     if(root == NULL){
        root = new Node(Key);
         return root;
     }
     else if(Key > root-> data)
        root ->  right = insert(root -> right, Key);
    else if(Key < root -> data)
        root -> left = insert(root-> left,Key);
    return root;
}