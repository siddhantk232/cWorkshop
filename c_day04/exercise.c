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

int main () {

    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i*i);
    }
    return 0;
}