class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      Node* temp=head;
      while(temp!= NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
      }
    }
};
