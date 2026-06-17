#include<iostream>
using namespace std;
void inc_dec(int n){
if(n==0) return;
cout<<n<<endl;
inc_dec(n-1);
cout<<n<<endl;
return;
}

int main(){
int n;
cin>>n;
inc_dec(n);
return 0;
}