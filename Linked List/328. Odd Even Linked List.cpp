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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> vo,ve;
        int c=0;
        while(head!= NULL){
            if(c%2 == 0 )
                vo.push_back(head->val);
            else
                ve.push_back(head->val);
            head=head->next;
            c++;
        }
        ListNode *newnode=new ListNode(0);
        ListNode *p=newnode;
        for(int i=0;i<vo.size();i++){
            p->next=new ListNode(vo[i]);
            p=p->next;
        }
        for(int i=0;i<ve.size();i++){
            p->next=new ListNode(ve[i]);
            p=p->next;
        }
        // for(auto i:vo)
        //     cout<<i<<endl;
        // for(auto i: ve)
        //     cout<<i<<endl;
        return newnode->next;
    }
};