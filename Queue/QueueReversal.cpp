queue<int> rev(queue<int> q)
{
    // add code here.
    
    queue <int> qq;
    stack<int> s;
    int a = q.size();
    for(int i = 0; i< a; i++){
        s.push(q.front());
        q.pop();
    }
    int b = s.size();
     for(int i = 0; i< b; i++){
        qq.push(s.top());
        s.pop();
    }
    return qq;
}