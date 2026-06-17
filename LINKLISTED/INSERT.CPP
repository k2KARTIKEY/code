#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node *Head;
    Head=NULL;
    // Head=new Node(4);
    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;
    int arr[5]={2,3,4,5,6};
    //Insert the Node at beginning
    for(int i=0;i<5;i++){
    if(Head==NULL){
        Head=new Node(arr[i]);

    }
    //Linked list doesnt exist
    else{
        Node *temp;
        temp=new Node(arr[i]);
        temp->next=Head;
        Head=temp;
    }
}

// Print the value
Node *temp=Head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
};

    

}
