// #include <iostream>
// using namespace std;

// int partition(int arr[], int start, int end) {
//     int pivot = arr[end];
//     int pos = start;
//     for (int i = start; i < end; i++) {
//         if (arr[i] <= pivot) {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos], arr[end]); // place pivot in correct position
//     return pos;
// }

// void quicksort(int arr[], int start, int end) {
//     if (start >= end) return;
//     int pivot = partition(arr, start, end);
//     quicksort(arr, start, pivot - 1); // left side
//     quicksort(arr, pivot + 1, end);   // right side
// }

// int main() {
//     int arr[] = {10, 3, 2, 6, 8, 4, 5, 34, 5, 5, 43, 22};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quicksort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int partition(int a[],int st,int en){
    int piviot=a[en];
    int pos=st;
    for(int i=st;i<en;i++){
        if(a[i]<=piviot){
            swap(a[i],a[pos]);
            pos++;
        }
    }
    swap(a[pos],a[en]);
    return pos;
}
void quicksort(int a[],int st,int en){
    if(st>=en) return;
    int piviot =partition(a,st,en);
    quicksort(a,st,piviot-1);
    quicksort(a,piviot+1,en);
}
int main(){
int a[]={10,12,1,2,3};
int n=sizeof(a)/sizeof(a[0]);
quicksort(a,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
return 0;
}