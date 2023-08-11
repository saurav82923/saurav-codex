class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
                      vector<int>nums;
           for(int i=0;i<K;i++){
               Node* head=arr[i];
               while(head){
                   nums.push_back(head->data);
                   head=head->next;
               }
               head=NULL;
           }
           sort(nums.begin(),nums.end());
           // creating a ll
           Node* ans=new Node(-1);
           Node* temp=ans;
           for(auto it:nums){
               Node* curr=new Node(it);
               temp->next=curr;
               temp=curr;
           }
     return ans->next;

    }
};