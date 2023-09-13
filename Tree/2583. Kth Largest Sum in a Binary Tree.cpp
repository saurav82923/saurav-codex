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
    void level(TreeNode* root,vector<long long> &ans){
        queue<TreeNode*> q;
        q.push(root);
        long long sum;
        while(!q.empty()){
            int cnt=q.size();
            vector<long long> v;
            while(cnt--){
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                 if(temp->right)
                    q.push(temp->right);
            }
             sum=0;
            for(auto i:v)
                sum=sum+i;
            ans.push_back(sum);

        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> v1;
        level(root,v1);
        sort(v1.begin(),v1.end());
        if(k>v1.size())
            return -1;
        return v1[v1.size()-k];
    }
};