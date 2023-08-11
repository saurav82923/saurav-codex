class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        //code here
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int maxi = INT_MIN;
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            if(temp == NULL){
                ans.push_back(maxi);
                if(!q.empty()){
                    q.push(NULL);
                    maxi= INT_MIN;
                }
                
            }
            else{
                maxi= max(maxi,temp->data);
                if(temp-> left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return ans;
    }
};