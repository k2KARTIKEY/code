#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n;
for(int i = 1; i <= n; i++){// row
    for(int j=1;j<=i;j++){// column J KO I TIME CHALO TAB TRIANGLE BANEGA
       if((i+j)%2==0){
        cout<<"1";
       }else{
        cout<<"0";
       }
    }
    cout<<endl;
}

return 0;
}