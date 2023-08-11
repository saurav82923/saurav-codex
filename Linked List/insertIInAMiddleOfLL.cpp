int getlen(Node* head){
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	int len=getlen(head);
    if(len%2!=0){
       int ans=len/2;
       Node* temp=head;
       int i=0;
        while(i<ans){
           temp=temp->next;
           i++;
       }
    Node* insert=new Node(x);
    insert->next=temp->next;
    temp->next=insert;
    return head;
    }
    else{
        int ans=(len/2)-1;
       Node* temp=head;
       int i=0;
        while(i<ans){
           temp=temp->next;
           i++;
       }
    Node* insert=new Node(x);
    insert->next=temp->next;
    temp->next=insert;
    return head;
    }
}