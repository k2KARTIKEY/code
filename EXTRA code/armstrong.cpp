#include<iostream>

using namespace std;

int main(){
int num,digit=0,ams=0,ornum=0;
cin>>num;
num=ornum;
while(num>0){
    digit=num%10;
    ams=digit*digit*digit;
    ornum+=ams;
    num=num/10;
}
if(ams==num){
    cout<<"armstorm\n";
}else{
    cout<<"not an armstrom\n";
}
return 0;
}