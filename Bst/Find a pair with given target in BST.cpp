class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void inorder(struct Node *root,vector<int> &in){
        if(root == NULL)
            return ;
        inorder(root-> left,in);
        in.push_back(root->data);
        inorder(root -> right,in);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    vector<int> in;
    inorder(root, in);
    int i = 0,j =in.size() - 1;
    while(i<j){
        int sum =in[i]+ in[j];
        if(sum == target)
            return true;
        else if( sum > target)
            j--;
        else 
            i++;
    }
    return false;
    }
};