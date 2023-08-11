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
        map<int,int>  s;
        while(head != NULL){
            s[head->val]++;
            head=head->next;
        }
        ListNode* temp1 = new ListNode(0);
        ListNode* temp= temp1;
       for(auto i: s){
           if(i.second == 1){
           temp->next = new ListNode (i.first);
           temp=temp->next;
           }
       }
       return temp1->next;
    }
};