#include<iostream>
using namespace std;
void swap(int &a,int &b){

    
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=12;
    int y=544;
   swap(x,y);
   cout<<x<<" "<<y<<endl;
return 0;
}