#include <stdio.h>

int main () {
// to print 
/* 
    ****
    ****
    ****
    ****
*/

//    for (int i = 1; i <= 4; i++) {
//        for (int j = 1; j <= 4; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }


// to print 
/* 
    *
    **
    ***
    ****
    *****
*/

    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

// to print 
/* 
    *****
    ****
    ***
    **
    *
*/

    // for (int i = 5; i <= 5; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("*");
    //     }

    //     printf("\n");
    //     if(i == 0) break;
    // }

// to print 
/* 
        *
       **
      ***
     ****
    *****
*/    

    int spaces, stars = 1, n;

    printf("enter n");
    scanf("%d", &n);

    spaces = n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spaces; j++) printf(" ");
        for (int k = 1; k <=  stars; k++) printf("*");

        printf("\n");

        stars++;
        spaces--;
    }
}