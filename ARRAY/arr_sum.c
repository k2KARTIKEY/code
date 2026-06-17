#include<stdio.h>

int main(){
int num,digit=0,ams=0,ornum=0;
scanf("%d",&num);
num=ornum;
while(num>0){
	digit=num%10;
	ams+=digit*digit*digit;
	num=num/10;
}
	
	if(ornum=ams){
	printf("armstrong\n");
	}else{
		printf("not an armstrong\n");
	}
}

