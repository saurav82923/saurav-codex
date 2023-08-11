Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL)
            return root;
   vector<int> v;
    Node* temp = root;
        while(temp!=NULL)
        {
            Node* temp2 = temp;
            while(temp2!=NULL)
            {
                v.push_back(temp2->data);
                temp2=temp2->bottom;
            }
            temp=temp->next;
        }
    sort(v.begin(),v.end());
     Node* dummy=new Node(-1);
     Node* temp3=dummy;
     for(auto i:v){
         Node* forw= new Node(i);
         temp3->bottom=forw;
         temp3=temp3->bottom;
     }
     return dummy->bottom;
}