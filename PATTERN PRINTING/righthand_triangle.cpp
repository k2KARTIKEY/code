
// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows = 5;
//     for (int i = rows; i > 0; i--) {
//         for (int j = 0; j <= rows; j++) {
//             if (j >= i) {
//                 cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        cout<<" ";
    }
for(int k=1;k<=i;k++){
    cout<<"#";
}
  cout<<endl;
}
return 0;
}
