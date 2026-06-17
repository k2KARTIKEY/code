#include<iostream>
using namespace std;
//Implement with it array
class stack{
    int *arr;
    int size;
    int top;
     
    //constructor
    public:
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }
    //Push
    void push(int value){
        if(top==size-1){
            cout<<"stack is over flow"<<endl;
            return;
        }else{
            top++;
            arr[top]=value;
            cout<<"pushed"<<value<<"in the stack"<<endl;

        }
    
    }
    //pop
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }else{
            top--;
            cout<<"popped"<<arr[top+1]<<" from the stack\n";
        }
    }
    //peek
    int peek(){
    if(top==-1){
            cout<<"stack underflow"<<endl;
            return -1;
        }else{
           return arr[top];
        }
    }
    //Empty
    bool IsEmpty(){
        return top==-1;
    }
    //size
    int IsSize(){
        return top+1;
    }
};

int main(){
    stack S(5);
    S.push(5);
    S.push(8);
    S.push(4);
    S.push(3);
    S.pop();

return 0;
}