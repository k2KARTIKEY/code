#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left ,*right;

    node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
node*binaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node*temp=new node(x);
    //left side create 
    cout<<"Enter the left child"<<x<<" : ";
    temp->left=binaryTree();
    //right side create
    cout<<"Enter the right child"<<x<<" : ";
    temp->right=binaryTree();
    return temp;
}
int main(){
    cout<<"Enter the root node";
    node*root;
    root=binaryTree();
return 0;
}