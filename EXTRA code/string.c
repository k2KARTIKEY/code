#include <stdio.h>
#include<string.h>
int main(){
    char str1[50]="Hello";
    char str2[]="World";
    printf("length of str1: %zu\n",strlen(str1));
    strcpy(str1,"programming");
    printf("After strcpy: %s\n",str1);
    strcat(str1,"in C");
    printf("After strcat: %s\n",str1);
    printf("strcmp result(str1 vs str2): %d\n",strcmp(str1,str2));
    return 0;
}