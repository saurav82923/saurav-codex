class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getlen(Node *head){
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    int getMiddle(Node *head)
    {
        // Your code here
        if(head==NULL)
            return -1;
        int len=getlen(head);
        int cnt=len/2;
        Node* temp=head;
        int i=0;
        while(i<cnt){
            temp=temp->next;
            i++;
        }
        return temp->data;
    }
};