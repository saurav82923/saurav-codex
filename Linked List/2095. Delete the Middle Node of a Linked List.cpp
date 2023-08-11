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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        if(head->next ==  NULL)
            return NULL;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int position=1;
        int c=cnt/2;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(position<= c){
            prev= curr;
            curr=curr->next;
            position++;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};