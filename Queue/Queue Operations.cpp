class Solution{
    public:
    // Function to insert element into the queue
    map<int,int> m;
    void insert(queue<int> &q, int k){
        // Your code here
        m[k]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        return m[k];
        
    }
    
};
                    or
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int count=0;
        for(int i =0;i<q.size(); i++){
            if(k == q.front())
                count++;
            q.push(q.front());
            q.pop();
        }
        return count ;
    }
    
};