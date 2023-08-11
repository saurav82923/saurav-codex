/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */


class Solution
{
    public:
    //Function to connect nodes at same level.
   
    void levelorder(Node* root){
        if(root == NULL)
            return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
           while(s--){
            Node* temp=q.front();
            q.pop();
            // cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
             if(temp->right)
                    q.push(temp->right);
            temp->nextRight=(s?q.front():NULL);
                
        }
        }
    }
    
    void connect(Node *root)
    {
       // Your Code Here
       levelorder(root);
    }    
      
};