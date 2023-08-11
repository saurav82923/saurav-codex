class Solution
{
    private:
        void inorder(Node* root, vector<int >& vec){
            if(root == NULL) return;
            
            inorder(root->left, vec);
            vec.push_back(root->data);
            inorder(root->right, vec);
        }
       vector<int > merge(vector<int> &vec1, vector<int> &vec2){
            
            vector<int> ans;
            int i = 0, j = 0;
            int s1 = vec1.size();
            int s2 = vec2.size();
            
            while(i < s1 && j < s2){
                int d1 = vec1[i];
                int d2 = vec2[j];
                if(d1 < d2){
                    ans.push_back(d1);
                    i++;
                }else if(d2 < d1){
                    ans.push_back(d2);
                    j++;
                }else{
                    ans.push_back(d1);
                    ans.push_back(d2);
                    i++;
                    j++;
                }
            }
            while(i < s1){
                 ans.push_back(vec1[i++]);
            }
             while(j < s2){
                 ans.push_back(vec2[j++]);
            }
            return ans;
        }
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> vec1;
       vector<int> vec2;
       
       inorder(root1, vec1);
       inorder(root2, vec2);
       
       return  merge(vec1, vec2);
       
    }
};