#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n;
for(int i = 1; i <=n ; i++){// row
    for(int j=1;j<=i;j++){
        cout<<(n-j+1);
    }
    cout<<endl;
}

return 0;
}