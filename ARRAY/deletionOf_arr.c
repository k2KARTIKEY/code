#include <stdio.h>

int main() {
    int n = 5;
    int index;
    int arr[10];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the index you want to delete: ");
    scanf("%d", &index);
    
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
