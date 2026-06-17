#include<iostream>
using namespace std;

int main(){
int n,i;
cin>>n;

for(int i=1;i<=n;i++){
    int nst=n-i+1;
for(int j=1;j<=nst;j++){
    cout<<" ";
}
for(int j=1;j<=2*i-1;j++){
    cout<<"*";
}
cout<<"\n";
}

return 0;
}