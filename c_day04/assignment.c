#include <stdio.h>

// 01 WAP to print the month name based on the input by user in int 1 - 12.

// int main () {
    
//     int monthNum;
//     printf("enter the month number and i will tell the name of the month \n");
//     scanf("%d", &monthNum);

//     switch (monthNum) {
//         case 1:
//             printf("it is January!\n");
//             break;
//         case 2:
//             printf("it is februaru!\n");
//             break;
//         case 3:
//             printf("it is march!\n");
//             break;
//         case 4:
//             printf("it is april!\n");
//             break;
//         case 5:
//             printf("it is may!\n");
//             break;
//         case 6:
//             printf("it is june!\n");
//             break;
//         case 7:
//             printf("it is july!\n");
//             break;
//         case 8:
//             printf("it is august!\n");
//             break;
//         case 9:
//             printf("it is september!\n");
//             break;
//         case 10:
//             printf("it is october!\n");
//             break;
//         case 11:
//             printf("it is november!\n");
//             break;
//         case 12:
//             printf("it is december!\n");
//             break;
//         default:
//             printf("there are 12 months only!\n");

//     }

//     return 0;
// }

// Q02

// int main () {
//     int n;
//     printf("enter n\n");
//     scanf("%d", &n);

//     switch (n) {
//         case 1:
//             printf("one\n");
//             break;
//         case 2:
//             printf("two\n");
//             break;
//         case 3:
//             printf("three\n");
//             break;
//         case 4:
//             printf("four\n");
//             break;
//         default:   
//             if (n % 5 == 0) printf("zero\n");
//             else printf("%d\n", n % 5);
//     }

//     return 0;
// }

// Q03

// int main () {
//     int n;
//     printf("enter n\n");
//     scanf("%d", &n);

//     switch (n) {
//         case 1:
//             printf("name\n");
//             break;
//         case 2:
//             printf("age\n");
//             break;
//         case 3:
//             printf("branch\n");
//             break;
//         case 4:
//             printf("birth date\n");
//             break;
//         default:   
//             printf("invalid input\n");
//     }

//     return 0;
// }

// Q04

int main () {

    int a,b,c;
    printf("enter numbers a, b, and c\n");
    scanf("%d %d %d", &a, &b, &c);

    int condition = c % 2;

    switch (condition) {
        case 1:
            if(c == 3) printf("a & b = %d\n", a & b);
            printf("a + b = %d\n", a + b);
            break;
        case 0:
            if (c == 2) printf("a * b = %d", a * b);
            else printf("a + (~b) = %f", (a + (~b)));
            break;
    }

    return 0;
}