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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v,v1;
        while(l1!= NULL){
            v.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!= NULL){
            v1.push_back(l2->val);
            l2=l2->next;
        }
        reverse(v.begin(),v.end());
        reverse(v1.begin(),v1.end());
     int a=0,b=0;
        int carry=0;
        vector<int> ans;
        int vsize=v.size()-1;
        int v1size=v1.size()-1;
        while(a < v.size() || b <v1.size() ){
            int a1,b1;
             if(a> vsize)
             a1= 0;
             else
             a1= v[a];
             
            if(b> v1size)
             b1= 0;
             else
             b1= v1[b];
            int sum=carry+a1+b1;
            ans.push_back(sum%10);
            carry=sum/10;
            a++;
            b++;

        }
       
        if(carry>0)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        for(int i=0;i<ans.size(); i++){
            temp->next= new ListNode(ans[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};