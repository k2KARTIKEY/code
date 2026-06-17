#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next; 
    Node(int value){
        int data=value;
        next=NULL;
    }
};

Createlinklist(int arr,int index,int size){
    //base case
    if(index==size){
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Createlinklist(arr,index+1,size);
    return temp;
}
int main(){
Node *Head;
Head=NULL;
int arr[]={2,3,4,5,6,7};
Head=Createlinklist(arr,0,6);

//print value
Node *temp;
temp=Head;
while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
};

}