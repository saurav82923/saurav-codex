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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        a=a-1;
        b=b+1;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        while(a--){
            temp=temp->next;
        }
        
        while(b--){
            temp1=temp1->next;
        }
        temp->next=list2;
        temp2->next=temp1;
        return list1;
    }
};