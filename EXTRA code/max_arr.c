#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	printf("No.of values: \n");
	scanf("%d",&n);
	int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
	int mi=3637373;
	int scmi=47474;
	
	for(int i=0;i<n;i++){
		
		
		if(arr[i]<mi) mi=arr[i];
		if(arr[i]<scmi&&arr[i]!=mi) scmi=arr[i];
	}

	printf("Min element= %d\n",mi);
	printf("Second min element= %d\n",scmi);
}