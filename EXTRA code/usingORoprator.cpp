#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
if(n%5==0 || n%3==0){ //if any of the on condition is true then the if condition is run
    cout<<"Dvisible By 5 or 3";
 } else{
        cout<<"not divisible";
    
}
return 0;
}