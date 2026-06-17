#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=i-1;j<n;j++){
        cout<<" ";
    }
    for(int k=n;k>=i+1;k--){
        cout<<"*";
    }
    cout<<"\n";
}
return 0;
}