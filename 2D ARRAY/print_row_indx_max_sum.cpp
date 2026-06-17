#include<iostream>
using namespace std;
int printrowmax(int a[][4],int row,int col){
    int index=-1,sum=INT16_MIN;
    for(int i=0;i<row;i++){
        i    
        for(int j=0;j<col;j++){
            total+=a[i][j];
            if(total>sum){
                sum=total;
                index=i;
            }
        }
        cout<<sum<<endl;
    }
    cout<<sum<<endl;
    cout<<index<<" ";
}
int main (){
    int a[3][4]={1,2,3,4,5,6,7,8,,9,10,11,12};
    printrowmax(a,3,4);

}