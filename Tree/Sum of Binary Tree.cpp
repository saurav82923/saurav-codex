long int sumBT(Node* root)
{
    // Code here
    if(root == NULL)
        return 0;
    long int left = sumBT(root->left);
      long int right = sumBT(root->right);
      return left+right+root->key;
}