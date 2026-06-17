#include<stdio.h>
int main(){
    int n;
    printf("Enter size");
    scanf("%d",&n);
    
    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory is allocated");

    }else{
        printf("memory is not allocated");
    }
    return 0;
}