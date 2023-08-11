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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> sp;
        while(head){
            sp.push_back(head->val);
            head=head->next;
        }
        int sum=0;
        int n=sp.size();
        vector<int> sp1;
        for(int i=0;i<n;i++){
            sum+=sp[i];
            if(sp[i]==0){
                if(sum!=0)
                    sp1.push_back(sum);
                    sum=0;
            }
        }
        ListNode *newnode=new ListNode(0);
        ListNode *p=newnode;
        for(int i=0;i<sp1.size();i++){
            p->next=new ListNode(sp1[i]);
            p=p->next;
        }
        return newnode->next;
    }
};