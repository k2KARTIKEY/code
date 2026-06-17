#include<iostream>
using namespace std;
int fibonaci(int n){
    if(n==1||n==0)
        return 1;
    return fibonaci(n-1)+fibonaci(n-2);

}
int main(){
cout<<fibonaci(4);
return 0;
}