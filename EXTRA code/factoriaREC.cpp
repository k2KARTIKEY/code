// #include<iostream>
// using namespace std;
// int  fact(int n){
//     if(n==0||n==1) return 1;
//     return n*fact(n-1);
// }

// int main(){
// cout<<fact(5)<<endl;
// return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int fact=1;
    int temp=n;

for(int i=1;i<=n;i++){
fact*=i;

}
cout<<fact<<endl;
int digit=temp%10;
sum+=digit;
temp=temp/10;
cout<<sum<<endl;
return 0;
}