// #include<iostream>
// using namespace std;

// int main(){
// int n,m;
// cin>>n;
// for(int i = 1; i <= n; i++){// row
//     for(int j=1;j<=n-i+1;j++){// column J KO I TIME CHALO TAB TRIANGLE BANEGA
//         cout<<"*";
//     }
//     cout<<endl;
// }

// return 0;
// }


            //OOOOOORRRRRRRRRRR


// #include<iostream>
// using namespace std;

// int main(){
// int n,m;
// cin>>n;
// for(int i = n; i >=1; i--){// row
//     for(int j=1;j<=i;j++){// column J KO I TIME CHALO TAB TRIANGLE BANEGA
//         cout<<"*";
//     }
//     cout<<endl;
// }

// return 0;
// }


                  //OOOOOOOOOOORRRRRRRRRRRR


#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n;
int a=n;
for(int i = 1; i <= n; i++){// row
    for(int j=1;j<=a;j++){// column J KO I TIME CHALO TAB TRIANGLE BANEGA
        cout<<"*";
    }
    cout<<endl;
    a--;
}


return 0;
}