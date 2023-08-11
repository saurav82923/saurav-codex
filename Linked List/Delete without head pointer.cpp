
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       if(head==del){
       head=head->next;
       delete del;
       }
       else{
        //   Node *curr=head;
           Node *prev=NULL;
          Node *temp=head;
           while(temp!=del){
               prev=temp;
            //   curr=curr->next;
               temp=temp->next;
           }
           prev->next=temp->next;
           temp->next=NULL;
           delete temp;
       }
       
    }

};