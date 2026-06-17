#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid=(start+end)/2;
while (start<=end){
if(arr[mid]==key)    cout<<"Got it\n";
else if(arr[mid]<key)
    start=mid+1;
else
    end=mid-1;

}
return -1;
}
int main(){
    int key,n,mid=0;
    int arr[1000];
    cout<<"Enter size of arr\n";
    cin>>n;
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      cout<<"Enter the number u want to find\n";
    cin>>key;
    cout<<BinarySearch(arr,n,key);
}