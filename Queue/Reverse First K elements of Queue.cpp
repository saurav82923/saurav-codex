queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    int a=q.size();
    queue<int> qu;
    stack<int> s;
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        qu.push(s.top());
        s.pop();
    }
     while(!q.empty()){
        qu.push(q.front());
        q.pop();
    }
    return qu;
    
}