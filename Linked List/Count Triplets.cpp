int countTriplets(struct Node* head, int x) 
{ 
    // code here.
    vector<int> v;
    Node* temp=head;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<v.size();i++){
        int s=i+1;
        int e=v.size()-1;
        while(s<e){
        if(v[s]+v[e]+v[i]==x){
            cnt++;
            s++;
            e--;
        }
         else if(v[i]+v[s]+v[e]<x)
                    s++;
          else 
            e--;      
        }
    }
    return cnt;
} 