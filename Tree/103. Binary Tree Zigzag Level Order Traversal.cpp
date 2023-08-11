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
    void level(TreeNode* root,vector<vector<int>>& ans){
        queue<TreeNode*> q;
        q.push(root);
        int count=0;
        while(!q.empty()){
            int cnt=q.size();
            vector<int> v(cnt);
            for(int i=0; i<cnt; i++){
                TreeNode* temp=q.front();
                q.pop();
                v[i]= temp->val;
                if(temp->left)
                    q.push(temp->left);
                 if(temp->right)
                    q.push(temp->right);
            }
            if(count%2 != 0 ){
                reverse(v.begin(),v.end());
            }
            ans.push_back(v);
             count++;
        }
            
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        level(root,ans);
        return ans;
    }
};