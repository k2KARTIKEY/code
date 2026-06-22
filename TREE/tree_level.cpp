#include<iostreame>
#include<queue>
using namespace std;


class Node
{
    public:
    int data;
    Node* left,*right;
}
Node(int value)
{
data=value;
left=right=NULL;
} 
int maint()
{
    int x;
    cout<<"Enter the root element"<<endl;
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root=new Node(x);
    q.push(root);

    //build the binary tree
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        cin>>first;
    }
}