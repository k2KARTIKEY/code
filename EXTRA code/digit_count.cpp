#include<iostream>
using namespace std;

int main(){
int count,digit=0,num;

cin>>num;
int n=num;
while (num>0)
{
  digit=num%10;
  count++
 num = num/10 ;
}
cout<<count;

return 0;
}