#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n,i,x,term=1,sum=0;
cin>>n>>x;

for(i=0;i<=n;i++){
int exponent=2*i+1;
int sign=(i%2==0)?1:-1;
int numerator=sign*pow(x,exponent);
int denomerator=1;
for(int j=1;j<=exponent;j++){
denomerator*=j;
}
term=numerator/denomerator;
sum+=term;
cout<<sum<<endl;
}
}
// #include<iostream>
// using namespace std;

// int main(){
// int arr[5],n;
// n=sizeof(arr)/sizeof(arr[0]);
// int mx=INT16_MIN;
// for(int i=0;i<=n;i++){
// cin>>arr[i];
// mx=max(mx,arr[i]) ;

// }
// cout<<mx;

// return 0;
// }
