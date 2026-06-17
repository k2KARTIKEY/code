// #include<iostream>
// using namespace std;

// int main(){
// 	int n,q;
// 	cin>>n>>q;
// 	int arr[n];
// 	int top=-1;
// 	int top2=n;
// 	while(q--){
// 		int type;
// 		cin>>type;
// 		if(type==1){
// 			int val;
// 			cin>>val;
// 				if(top+1<top2){
// 				arr[++top]=val;
// 				}
// 		}
// 		else if(type==2){
// 			int val;
// 			cin>>val;
// 			if(top+1<top2){
// 				arr[--top]=val;
// 			}
// 		}
// 		else if(type==3){
// 			if(top!=-1){
// 				top--;
// 			}
// 		}
// 		else if(type==4){
// 			if(top2!=n){
// 				top2++;
// 			}
// 		}
// 	}
// 	for(int i=0;i<=top;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// 	for(int i=n-1;i>=top2;i--){
// 		cout<<arr[i]<<" ";
// 	}
// 	return 0;
// }

#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	int top=-1;
	int top1=n;
	while(k--){
		int val,type;
		scanf("%d",&type);
		if(type==1){
			scanf("%d",&val);
			if(top+1!=top1){
				arr[++top]=val;
			};
		}
		else if(type==2){
			scanf("%d",&val);
			if(top+1!=top1){
				arr[--top1]=val;
			}
			}
		else if(type==3){
			if(top!=-1){
				top--;
			}
		}else if(type==4){
			if(top1!=n){
				top1++;
			}
			
		}
	}
	if(top==-1&&top1==n){
		printf("-1\n");
		return;
	}
	int i=0;
	while(i<=top){
		printf("%d ",arr[i]);
		i++;
	}
	int j=n-1;
	while(j>=top1){
		printf("%d ",arr[j]);
		j--;
	}
    
}