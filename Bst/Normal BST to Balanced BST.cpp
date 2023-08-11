   void inorder(Node* root,vector<int> &in){
        if(root == NULL)
            return ;
        inorder(root-> left,in);
        in.push_back(root->data);
        inorder(root -> right,in);
    }
    Node* inordertobst(int s,int e,vector<int> &in){
        if(s>e)
            return NULL;
        int mid = (s+e)/2;
        Node* root = new Node(in[mid]);
        root -> left = inordertobst(s,mid-1,in);
        root -> right = inordertobst(mid+1,e,in);
        return root;
    }
Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int> inorderval;
	inorder(root,inorderval);
	return inordertobst(0,inorderval.size()-1,inorderval);
}