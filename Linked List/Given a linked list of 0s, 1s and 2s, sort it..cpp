class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        vector<int> v;
        Node* temp=head;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
         temp=head;
        int i=0;
        while(temp!=NULL){
           temp->data=v[i++];
            temp=temp->next;
        }
        return head;
    }
};