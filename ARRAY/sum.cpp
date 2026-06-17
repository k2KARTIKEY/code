#include<iostream>
using namespace std;
int main(){
int arr[]={2,34,5,3,2,1,2,3,2,};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<n<<endl;
int sum=0;
for(int i=0;i<n;i++){
    
    sum+=arr[i];
    
}
cout<<sum<<" ";

return 0;
}