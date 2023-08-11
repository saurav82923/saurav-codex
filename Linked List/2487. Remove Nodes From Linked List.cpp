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
 ListNode* reverseL( ListNode *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
         head=reverseL(head);
        ListNode* curr=head;
        int maxi=head->val;
        ListNode* pre=head;
         head=head->next;
        while(head){
            if(head->val >= maxi){
                maxi=head->val;
                pre=head;
                head=head->next;
            }
            else{
                pre->next=head->next;
                head=pre->next;
            }
        }
       
        return reverseL(curr);
        
    }
};