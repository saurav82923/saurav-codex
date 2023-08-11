class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
        Node* temp=head;
        Node* temp1=head;
        map<int,int> m;
        while(temp!=NULL){
            m[temp->data]++;
            temp=temp->next;
        }
        vector<int> v;
        for(auto i:m){
            if(i.second==1)
                v.push_back(i.first);
        }
    Node* u = new Node(-1);
       temp=u;
       for(auto x:v){
            Node* d = new Node(x);
           temp->next=d;
           temp=d;
       }
       return u->next;
    }
};