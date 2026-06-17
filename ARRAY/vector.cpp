#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v(5);
for(int i=0;i<v.size();i++){
    cin>>v[i];
    
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "<<endl;
}
cout<<endl;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(10);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
return 0;
}