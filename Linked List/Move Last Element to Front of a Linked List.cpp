class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        int cnt=0;
        while(curr!=NULL){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=head;
        ListNode* temp=prev;
        while(cnt>1){
            temp=temp->next;
            cnt--;
        }
        temp->next=NULL;
        return prev;
    }
};