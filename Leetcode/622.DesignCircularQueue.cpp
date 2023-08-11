 class MyCircularQueue {
int *arr;
int size;
int front;
int rear;
public:

MyCircularQueue(int k) {
    size=k;
    arr=new int[k];
    front=rear=-1;
}

bool enQueue(int value) {
    if(rear==-1 and front==-1){
        rear=front=0;
    }else if((rear+1)%size==front){
        return false;
    }else{
        rear=(rear+1)%size;
    }
    arr[rear]=value;
    return true;
}

bool deQueue() {
    if(rear==-1 and front==-1){
        return false;
    }else if(rear==front){
        // int ans=arr[front];
        rear=front=-1;
        return true;
    }else{
        // int ans=arr[front];
        front=(front+1)%size;
        return true;
    }
}

int Front() {
    if(rear==-1 and front==-1){
        return -1;
    }else{
        return arr[front];
    }
}

int Rear() {
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
    if((rear+1)%size==front){
        return true;
    }else{
        return false;
    }
}
};