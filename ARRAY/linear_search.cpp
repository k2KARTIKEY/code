#include<iostream>
using namespace std;

int main(){
int arr[]={2,34,5,3,2,1,2,3,2,};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<n<<endl;
int x;
cin>>x;
cout<<"target no. "<<x<<endl;;
bool flag= false;   //false means not present
for(int i=0;i<n;i++){
    if(arr[i]==x){
     flag=true;
    }
}
if(flag==true){
    cout<<x<<": is present\n";
}else{
    cout<<x<<": is not present";
}
return 0;
}