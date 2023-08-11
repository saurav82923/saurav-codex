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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> s;
        while(head){
            s.insert(head->val);
            head=head->next;
        }
        ListNode* dummy=new ListNode(-1);
     ListNode* temp3=dummy;
        for(auto i:s){
         ListNode* forw= new ListNode(i);
         temp3->next=forw;
         temp3=temp3->next;
     }
     return dummy->next;
    }
};