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
    bool palin(vector<int> &v){
        int s=0;
        int l=v.size()-1;
        while(s<l){
            if(v[s] != v[l])
                return 0;
            s++;
            l--;
        }
        return 1;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return palin(v);
        
    }
};