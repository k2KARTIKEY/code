// #include<iostream>
// using namespace std;

// int main(){
// int arr[]={2,3,4,5,43,34,23,23,21};
// int n= sizeof(arr)/sizeof(arr[0]);
// int mx=arr[0];
// for(int i=0;i<=n;i++){
// mx=max(mx,arr[i]);
// }
// cout<<mx;
// return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
// int arr[]={2,3,4,5,43,34,23,23,21};
// int n= sizeof(arr)/sizeof(arr[0]);
// int mx=arr[0];
// for(int i=0;i<=n;i++){
// if(mx<arr[i]) mx=arr[i];
// }
// cout<<mx;
// return 0;
// }




#include<iostream>
using namespace std;

int main(){
int arr[]={2,3,4,5,43,34,23,23,21};
int n= sizeof(arr)/sizeof(arr[0]);
int mx=0;
int mn=INT8_MAX;
for(int i=0;i<=n;i++){
mx=max(mx,arr[i]);
mn=min(mn,arr[i]);
}
cout<<mx<<" "<<mn;
return 0;
}