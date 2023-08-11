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
    int h(TreeNode* root){
        if(root == NULL)
            return 0;
        return max(h(root->left),h(root->right))+1;
    }
    void buildDeepNodes(TreeNode* root,int depth,vector<int>& deepNodes,int height){
        if(root==nullptr){
            return;
        }
        depth+=1;
        if(depth==height){
            deepNodes.push_back(root->val);
        }
        buildDeepNodes(root->left,depth,deepNodes,height);
        buildDeepNodes(root->right,depth,deepNodes,height);
    }
    int deepestLeavesSum(TreeNode* root) {
       
        int height=h(root);
        cout<<height<<endl;
        vector<int> v;
        int i=0;
        buildDeepNodes(root,i,v,height);
        int sum=0;
        for(auto i:v){
            sum=sum+i;
        }
        return sum;

    }
};