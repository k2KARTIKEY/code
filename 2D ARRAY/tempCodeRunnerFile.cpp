#include<iostream>
using namespace std;

int main(){
int row,col;
cout<<"enter row: "<<endl;
cin>>row;
cout<<"enter col: "<<endl;
cin>>col;
int arr[100][100];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<row;i++){
    int rowsum=0;
    for(int j=0;j<col;j++){