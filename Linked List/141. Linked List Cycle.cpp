class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp1=head;
       unordered_map<ListNode* ,bool> visited;
        while(temp1){
             if(visited[temp1] == true)
                return true;
            visited[temp1]=true;
            temp1=temp1->next;
        }
        return 0;
    }
};