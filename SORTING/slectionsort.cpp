#include<iostream>
using namespace std;
int main(){
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a[i];
}
            //SELECTION SORT
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]){
                index=j;
            }
        }
        int temp=a[index];
        a[index]=a[i];
        a[i]=temp;
    }
            
    for(int i=0;i<n;i++){
    cout<<a[i];
}
}
