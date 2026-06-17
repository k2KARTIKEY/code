#include <stdio.h>
#include <stdlib.h>
int main() {
    int Num;
    int *p =malloc(sizeof(int));
    printf("Num: ");
    scanf("%d", p);
    printf("%d\n", *p);
     
    return 0;
}



