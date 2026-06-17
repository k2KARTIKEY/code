#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
char op;
cin>>op;
if(op=='+') cout<<a+b;
if(op=='-') cout<<a-b;
if(op=='*') cout<<a*b;
if(op=='/') cout<<a/b;
return 0;
}