void MyQueue :: push(int x)
{
        // Your Code
        if(rear <= 100004){
            arr[rear++]=x;
            
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code   
        if(front == rear)
            return -1;
        else{
            int a= arr[front];
            arr[front]= -1;
            front++;
            if(front == rear){
                front = 0;
                rear =0;
            }
            return a;
        }
        
}