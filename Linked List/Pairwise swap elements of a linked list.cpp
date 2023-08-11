class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node* curr=head;
        Node* temp=head;
        while(temp->next!=NULL){
            swap(temp->data,temp->next->data);
            if(temp->next->next!=NULL and temp->next!=NULL )
            temp=temp->next->next;
            else
                break;
        }
         while(curr) 
        {

            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }
};