#include<iostream>
using namespace std;
int sumdigit(int n){
    
if(n<10) return n;
int sum=0;
while (n>0){
    sum+= n%10;
    n/=10;

}
return sumdigit(sum);

}
int main(){
    int n;
    cin>>n;
cout<<sumdigit(n);
return 0;
}