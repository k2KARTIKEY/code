#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<n-i+1;j++){// space ke liye loop
        cout<<" ";
        }for(int k=1;k<=i;k++){// number triangle ke liye 
        cout<<k;
        }for(int h=1;h<=i-1;h++){
            cout<<a;
            a--;
        }

        cout<<endl;
    }
}