class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        vector<int> even;
        vector<int> odd;
        Node* temp=head;
        Node* temp1=head;
        int cnt=0;
        while(temp!=NULL){
            if(temp->data%2==0){
                even.push_back(temp->data);
                temp=temp->next;
                cnt++;
            }
            else{
                odd.push_back(temp->data);
                temp=temp->next;
            }
        }
      for(int i=0;i<N-cnt;i++){
          even.push_back(odd[i]);
      }
      int i=0;
      while(temp1!=NULL){
          temp1->data=even[i];
          temp1=temp1->next;
          i++;
      }
      return head;
    }
};