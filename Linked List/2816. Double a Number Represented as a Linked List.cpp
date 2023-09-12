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
    ListNode* doubleIt(ListNode* head) {
       ListNode* temp= head;
       vector<int> store;
       while(temp!= NULL) {
           store.push_back(temp->val);
           temp=temp->next;
       }
          reverse(store.begin(),store.end());
        
        int rem = 0;
        for(int i = 0; i<store.size(); i++){
            int num = store[i]*2 + rem;
            rem = num / 10;
            store[i] = num%10;
        }
        
        if(rem != 0){
            store.push_back(rem);
        }
            
        int i = 0;
        reverse(store.begin(),store.end());
          ListNode* dum=new ListNode(0);
          temp=dum;
          for(int i=0; i<store.size();i++){
            temp->next= new ListNode(store[i] );
            temp=temp->next;
          }
        return dum->next;
    }
};