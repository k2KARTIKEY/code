#include<iostream>
#include <cmath>
using namespace std;
int countdigit(int n){
    int count=0;
    while (n>0)
    {
        count++;
        n/10;
    }
    return count;
    
}
int armstrong(int number,int digit){
    int ans=0,rem=0;
    while (number>0){
    
    int arrn=number;
    rem=number%10;
    ans+=pow(rem,digit);
    number/=10;
     }
     return ans;
}
int main(){
int num;
cin>>num;
int digit=countdigit(num);
cout<<armstrong(num,digit)<<endl;
return 0;
}