#include<iostream>
using namespace std;
int countdigit(int n){
    int count=0;
    if(n==0) return 0;
    int num=n%10;
   
     return  1+countdigit(n/10);

}
int main(){
    int n;
    cin>>n;
cout<<countdigit(n)<<endl;
return 0;
}