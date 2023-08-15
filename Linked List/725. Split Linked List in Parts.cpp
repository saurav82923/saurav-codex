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
    private:
    ListNode* convertll(vector<int> ans){
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        for(int i=0;i<ans.size(); i++){
            temp->next= new ListNode(ans[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        vector<ListNode*> ans;
        vector<vector<int> > vv;
        vector<int> v;
        while(temp!= NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int a=0;
        int cnt=0;
        int size=v.size();
        int firstblock=size%k;
        int elementinoneblock=size/k;
        if(k>size){
            for(int i=0; i<k; i++){
            vector<int> b;
            for(int j=0; j<1; j++){
                if(a<size){
                    b.push_back(v[a]);
                    a++;
                }
            }
            vv.push_back(b);
        }
        }
    else
        for(int i=0; i<k; i++){
            vector<int> b;
            for(int j=0; j<elementinoneblock; j++){
                    b.push_back(v[a]);
                    a++;
            }
            if(cnt<firstblock){
                for(int k=0; k<1; k++){
                    b.push_back(v[a]);
                    a++;
                    cnt++;
                }
            }
            vv.push_back(b);
        }
        for(auto i:vv){
            ans.push_back(convertll(i));
        }
        return ans;
    }
};