class MyCircularDeque {
public:
    int *arr;
    int front;
    int rear;
    int size;
    MyCircularDeque(int n) {
          size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    
    bool insertFront(int value) {
    
     if((front==0 && rear==size-1)||(front==rear+1)){
        return false;
    }else if(rear==-1 and front==-1){
        rear=front=0;
        arr[front]=value;
     }else if(front==0){
        front=size-1;
        arr[front]=value;
    }else{
        front--;
        arr[front]=value;
    }
    return true;
}

bool insertLast(int value) {
    
     if((front==0 && rear==size-1)||(front==rear+1)){
        return false;
    }else if(rear==-1 and front==-1){
        rear=front=0;
        arr[front]=value;
     }else if(rear==size-1){
        rear=0;
        arr[rear]=value;
    }else{
        rear++;
        arr[rear]=value;
    }
    return true;
}

bool deleteFront() {
    if(rear==-1 and front==-1){
        return false;
    }else if(rear==front){
        rear=front=-1;
    }else if(front==size-1){
        front=0;
    }else{
        front++;
    }
    
    return true;
}

bool deleteLast() {
    if(rear==-1 and front==-1){
        return false;
    }else if(rear==front){
        rear=front=-1;
    }else if(rear==0){
        rear=size-1;
    }else{
        rear--;
    }
    return true;
}

int getFront() {
    if(rear==-1 and front==-1){
        return -1;
    }else{
        return arr[front];
    }
}

int getRear() {
    if(rear==-1 and front==-1){
        return -1;
    }else{
        return arr[rear];
    }
}

bool isEmpty() {
    if(rear==-1 and front==-1){
        return true;
    }else{
        return false;
    }
}

bool isFull() {
    if((front==0 && rear==size-1)||(front==rear+1)){
        return true;
    }else{
        return false;
    }
}

};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */