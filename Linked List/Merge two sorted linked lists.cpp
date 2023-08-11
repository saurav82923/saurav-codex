Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    while(head1){
        v.push_back(head1->data);
        head1=head1->next;
     }
    while(head1){
        v.push_back(head1->data);
        head1=head1->next;
     }
     while(head2){
        v.push_back(head2->data);
        head2=head2->next;
     }
     sort(v.begin(),v.end());
     Node* dummy=new Node(-1);
     Node* temp=dummy;
     for(auto i:v){
         Node* forw= new Node(i);
         temp->next=forw;
         temp=forw;
     }
     return dummy->next;
}  