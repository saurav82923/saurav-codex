int getNthFromLast(Node *head, int n)
{
       // Your code here
       int cnt=0;
       Node* temp=head;
       Node* temp1=head;
       while(temp){
           cnt++;
           temp=temp->next;
       }
        if(cnt<n){

          return -1;

      }
       int c=(cnt-n);
       while(c--)
       temp1=temp1->next;
       return temp1->data;
        
}