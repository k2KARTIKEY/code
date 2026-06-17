#include<iostream>
using namespace std;
void print(int n,int x){
    if(x<=n) {
        cout<<x<<endl;
    }
    
    print(n,x+1);
    return;
}
int main(){
int n;
cin>>n;
print(n,1);

return 0;
}