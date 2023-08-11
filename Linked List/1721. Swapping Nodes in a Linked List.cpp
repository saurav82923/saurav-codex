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
    ListNode* swapNodes(ListNode* head, int k) {
         vector<int>v;  // vector to store the value of the linked list
		int len=0;
		ListNode *p=head;
		while(p)
		{
			v.push_back(p->val); //store the linked list values
			p=p->next;
			len++;
		}
        swap(v[k-1],v[len-k]);
        ListNode* dummy=new ListNode(-1);
     ListNode* temp3=dummy;
     for(auto i:v){
         ListNode* forw= new ListNode(i);
         temp3->next=forw;
         temp3=temp3->next;
     }
     return dummy->next;
    }
};