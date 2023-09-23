/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
void traversal(TreeNode* root,vector<string> &res,string str){
        if(root==NULL) return;
        if(root->left || root->right){
    //     string s=to_string(root->val);
    //    str+=(s);
       char c=root->val +'0';
       str.push_back(c);
        }
       if(root->left==NULL && root->right==NULL){
           str+=to_string(root->val);
           res.push_back(str);
           return;
       }
        traversal(root->left,res,str);
        traversal(root->right,res,str);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        string s1="";
        ListNode* temp=head;
        while(temp!=NULL){
            s1.push_back(temp->val+'0');
            temp=temp->next;
        }
    vector<string> v;
    string s=""  ;
    traversal(root,v,s);
    for(auto i:v){
        if(i.find(s1) != string::npos)
            return true;
    }

    return false;
        
    }
};