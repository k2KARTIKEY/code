#include<iostream>
using namespace std;

int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>>c){
    cout<<"greatest number: "<<a;
}else if(b>a&&b>c){
cout<<"greatest number: "<<b;
}else{
    cout<<"greatest number: "<<c;
}
return 0;
}