/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode* ,bool> visited;
        ListNode* temp=headA;
        ListNode* temp1=headB;
        while(temp){
            visited[temp]=true;
            temp=temp->next;
        }
         while(temp1){
             if(visited[temp1] == true)
                return temp1;
            visited[temp]=true;
            temp1=temp1->next;
        }
        return 0;
    }
};