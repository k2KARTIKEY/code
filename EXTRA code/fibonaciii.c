#include<stdio.h>
void program_2_fibonacci(int terms) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("2. Fibonacci (Terms=%d): ", terms);

    if (terms >= 1) printf("%d", t1);
    if (terms >= 2) printf(", %d", t2);

    for (int i = 3; i <= terms; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}
int main(){
    program_2_fibonacci(6);
}