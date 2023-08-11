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
    private:
    void level(TreeNode* root,vector<double> &ans){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            vector<double> v;
            while(cnt--){
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                 if(temp->right)
                    q.push(temp->right);
            }
            double sum=0;
            for(auto i:v)
                sum=sum+i;
            ans.push_back(sum/v.size());

        }
    }
public:
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double> ans;
       level(root,ans) ;
       return ans;
    }
};