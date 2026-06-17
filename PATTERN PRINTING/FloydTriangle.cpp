#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n;
int sum=1;  //declare a variable sum dono loop se bahar 
for(int i = 0; i <= n; i++){// row
    for(int j=1;j<=i;j++){// column J KO I TIME CHALO TAB TRIANGLE BANEGA
       
        cout<<char(sum+64)<<" ";
        sum++;

    }
    cout<<endl;
}

return 0;
}