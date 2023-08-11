/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int vectortoInteger(vector<int> v){
        int no=0;
        for(int i=0; i<v.size(); i++){
            no=no*10 + v[i];
        }
        return no;
    }
     void solve(TreeNode* root , vector<int> path , int &sum){
        //base case
        if(root == NULL)
            return;
        
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            int x = vectortoInteger(path);
            sum += x;
        }
        
        solve(root->left , path , sum);
        solve(root->right , path , sum);
        
        path.pop_back();
    }
      int sumNumbers(TreeNode* root) {
        vector<int> path;
        int sum = 0;
        solve(root , path , sum);
        return sum;
        
    }
};