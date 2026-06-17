#include<iostream>
using namespace std;
char convert(char naam){
    char ans=0;
    ans=naam-'a'+'A';
    return ans;
}
int main(){
char name;
cin>>name;
cout<<convert(name);
return 0;
}