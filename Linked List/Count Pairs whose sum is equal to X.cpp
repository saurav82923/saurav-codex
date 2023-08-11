class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        Node* temp1=head1;
        Node* temp2=head2;
        unordered_set<int> v1,v2;
        while(temp1!=NULL){
            v1.insert(temp1->data);
            temp1=temp1->next;
        }
        int cnt=0;
        while(temp2!=NULL){
            if(v1.find(x-(temp2->data))!=v1.end())
               cnt++;
            temp2=temp2->next;
        }
       
    return cnt;
    }
};