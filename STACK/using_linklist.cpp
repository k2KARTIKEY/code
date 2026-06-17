#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;


    Node (int value){
        data=value;
        next=NULL;
    }
};
class Stack{
    Node *top;
    int size;
    public:
    Stack(){
        top=NULL;
        size=0;

    }
    void push(int value){
        Node*temp=new Node(value);
        if(temp==NULL){
            cout<<"Stack is over flow\n";
            return;
        }else{
            temp->next=top;
            top=temp;
            size++;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"stack is underflow\n";
            return;
        }else{
            Node *temp=top;
            cout<<"Popped"<<top->data<<endl;
            top=top->next;
            delete temp;
            size--;     q `
        }
    }
    //peak
    int peak(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }
    //is empty
    bool IsEmpty(){
        return top==NULL;
    }
    //is size
     int IsSize(){
        return size;
     }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();    
    s.pop();
    cout<<s.IsSize()<<endl;
    cout<<s.IsEmpty()<<endl;
}