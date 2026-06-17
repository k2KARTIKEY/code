#include<iostream>
using namespace std;
//circular arr use karke
class queue{
    int *arr;
    int size;
    int front,rear;
    
public:
    //constructor
    queue(int n){
        arr=new int[n];
        size=n;
        front=rear=-1;
    }
    //cheak queue is empty or not
    bool isEmpty(){
        return front==-1;
    }

    //cheak queue full
    bool isFull(){
         return (rear+1)%size==front;
    }

    //push element into queue
    void push(int x){
        if(isEmpty()){
            cout<<"Pushed "<<x<<" into the queue\n";
            front=rear=0;
            arr[0]=x;
            return;
        }
        else if(isFull()){
            cout<<"Queue is overflow\n";
            return;
        }
        //insert
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
             cout<<"Pushed"<<x<<"into the queue\n";
        }
    }

    //pop karenge 
    void pop(){
        if(isEmpty()){
            cout<<"QUEUEis underflow\n";
            return;
        }
        //pop kar do
        else{
            if(front==rear){
                cout<<"Pooped"<<arr[front]<<" into the queue\n";
                front=(front+1)%size;
            }
        }
    }

    //start me konsa element rakna hai
    int start(){
         if(isEmpty()){
            cout<<"QUEUEis underflow\n";
            return -1;
        }else{
            return arr[front];
        }
    }
};

int main(){
    queue q(5);
    q.push(1);
}