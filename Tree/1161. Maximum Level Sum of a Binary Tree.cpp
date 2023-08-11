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
    int maxLevelSum(TreeNode* root) {
        if (root == nullptr) return -1;
        int level1=-1;
        int level=0;
        int maxi=INT_MIN;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            level++;
            int sum=0;
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* temp=q.front();
                q.pop();
                sum=sum+temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            if(sum>maxi){
                maxi=sum;
                level1=level;
            }
        }
        return level1;
    }
};