// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         int found = 0;

//         for (int k = 0; k < i; k++) {
//             if (arr[k] == arr[i]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (found) continue;

//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }
//     printf("%d\n", count);
// }


#include <stdio.h>


    int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int duplicate_count=0;


    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = i+1 ; j < n ;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            duplicate_count++;
        }
    }
    printf("%d",duplicate_count);

    return 0;
}