#include<bits/stdc++.h>
using namespace std;



class Queue{
    private:
        int front,rear,size;
        int *Q;
    public:
        Queue(){
            front=rear=-1;
            size=10;
            Q=new int[size];
        }

        Queue(int size){
            front=rear=-1;
            this->size=size;
            Q=new int[this->size];
        }

        void enqueue(int x);
        int dequeue();
        void display();
};

void Queue::enqueue(int x){
    if(rear==size-1){
        cout<<"The size of queue is full!\n";
    }else{
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue(){
    int x=-1;
    if(rear==front){
        cout<<"The queue is empty\n";
    }else{
        x=Q[front+1];
        front++;
    }
    return x;
}

void Queue::display(){
    for(int i=front+1;i<=rear;i++){
        cout<<Q[i]<<' ';
    }
    cout<<'\n';
}


int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}