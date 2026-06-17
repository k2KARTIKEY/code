#include<iostream>
using namespace std;

int main(){
int n,key;
int arr[1000];
cin>>n;
cin>>key;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int found=0;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        found=1;
    }
    break;
}
if (found>0){
    cout<<"ypp\n";
}else{
    cout<<"hat";
}
return 0;
}