#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
for(int i=0;i<=n;i++){ //ROW
    for(int j=1;j<=i+1;j++){ //C
        cout<<j;
    }
    cout<<endl;
}
return 0;
}