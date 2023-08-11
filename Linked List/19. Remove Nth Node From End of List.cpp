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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       vector<int>v;  // vector to store the value of the linked list
		int len=0;
		ListNode *p=head;
		while(p)
		{
			v.push_back(p->val); //store the linked list values
			p=p->next;
			len++;
		}

		if (len==1) return NULL;  // If linked list contains only single Node then we can only return the NULL

		v.erase(v.begin()+ (len-n));
		head = new ListNode(v[0]);
		p = head;
		for (int i = 1; i < v.size(); i++)
		{
			ListNode *x = new ListNode(v[i]);
			p->next = x;
			p = p->next;
		}
		return head; 
    }
};