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
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        while(head!= NULL){
            ans.push_back(head->val);
            head=head->next;
        }
         sort(ans.begin(),ans.end());
         ListNode* temp1 = new ListNode(0);
        ListNode* temp= temp1;
       for(auto i: ans){
           
           temp->next = new ListNode(i);
           temp=temp->next;
           
       }
       return temp1->next;
    }
};