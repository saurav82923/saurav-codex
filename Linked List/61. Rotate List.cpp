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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(head==NULL) return head;
        ListNode* cop=head;
        vector<int> ans;
        while(cop){
            ans.push_back(cop->val);
            cop=cop->next;
        }
        int n=ans.size();
       k = k%ans.size();
        rotate(ans.begin(),ans.begin()+ n-k,ans.end());
         ListNode* temp1 = new ListNode(0);
        ListNode* temp= temp1;
       for(auto i: ans){
           
           temp->next = new ListNode(i);
           temp=temp->next;
           
       }
       return temp1->next;
    }
};