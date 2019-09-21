/* 

    Loops

*/

#include <stdio.h>

// int main () {
//     int n;
//     printf("enter the value of n");
//     scanf("%d", &n);

//     int sum = 0;
    
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     printf("the sum is %d", sum);
//     return 0;
// }

// int main () {

//     int n;
//     printf("enter the value of n\n");
//     scanf("%d",&n);

//     int evenSum = 0;
//     int oddSum = 0;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) evenSum += i;
//         else oddSum += i;
//     }

//     printf("sum of all even numbers from 1 to n is %d\n", evenSum);

//     printf("sum of all odd numbers from 1 to n is %d\n", oddSum);

//     return 0;
// }

// int main () {
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d %d\n", i, j);
//         }
//     }
//   return 0;
// }

// int main () {

//     int n;
//     printf("enter n");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

int main () {

    int n;
    printf("enter n");
    scanf("%d", &n);

    for (int i = n; i >= n; i--) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}