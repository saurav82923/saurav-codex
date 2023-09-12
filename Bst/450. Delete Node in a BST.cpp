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
int maxVal(TreeNode* root) {
		TreeNode* temp = root;
		if(temp == NULL) {
			return -1;
		}

		while(temp -> right != NULL) {
			temp = temp ->right;
		}
		return temp -> val;
	}
    TreeNode* deleteNode(TreeNode* root, int target) {
        if(root == NULL ) {
			return NULL;
		}
		if(root->val == target) { 
			if(root->left == NULL && root->right == NULL) {
				return NULL;
			}
			else if(root->left == NULL && root->right != NULL) {
				TreeNode* child = root->right;
				return child;
			}
			else if(root->left != NULL && root->right == NULL) {
				TreeNode* child  = root->left;
				return child;
			}
			else {
				int inorderPre = maxVal(root->left);
				root->val = inorderPre;
				root->left = deleteNode(root->left,inorderPre);
				return root;
				
			}
			
		}
		else if(target > root -> val) {
			root->right =  deleteNode(root->right, target);
		}
		else if(target < root->val) {
            			root->left = deleteNode(root->left, target);
		}
		return root;
    }
};