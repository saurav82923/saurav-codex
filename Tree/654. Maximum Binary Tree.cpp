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
    TreeNode* tree(vector<int> &nums,int s,int l){
        if(s>l)
            return NULL;
        int maxi=INT_MIN;
        int index=0;
        for(int i=s;i<=l; i++){
            if(nums[i]>maxi){
                index=i;
                maxi=nums[i];
            }
        }
        TreeNode* root=new TreeNode(nums[index]);
        root->left=tree(nums,s,index-1);
        root->right=tree(nums,index+1,l);
        return root;
        
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return tree(nums,0,nums.size()-1) ;
    }
};