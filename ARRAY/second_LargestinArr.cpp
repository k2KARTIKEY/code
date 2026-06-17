#include<iostream>
using namespace std;

int main(){
int arr[]={2,3,4,5,43,34,23,23,21};
int n= sizeof(arr)/sizeof(arr[0]);
int mx=arr[0];
int smx=arr[0];
for(int i=0;i<=n;i++){
if(mx<arr[i]) mx=arr[i];
}
for(int i=0;i<=n;i++){
    if(smx<arr[i]&&arr[i]!=mx) smx=arr[i];
}
cout<<mx<<" "<<smx;
return 0;
}


