#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
//step 1 find last digit
int reverse=0;
while(n!=0){
    int ld=n%10;
    reverse*=10;
    reverse+=ld;
    n/=10;

}
cout<<reverse<<endl;

return 0;
}
//****FOR SUM OF DIGIT IN NUMBER  ****/
/*STEP1
FIND LAST DIGIT = ld=n%10
FORM A VARIABLE SUM=0 ,   sum=sum+ld
NOW DIVIDE NUM BY 10 n=n/10
REPEAT UNTIL N BECOME ZERO
*/