#include <stdio.h>


// int  main () {
//     int a,b,c;

//     a = 5;
//     b = 6;
//     c = a - b;

//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// int  main () {
//     int a,b,c;

//     a = 5;
//     b = 6;
//     c = a + b;

//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// int  main () {
//     int a,b,c;

//     a = 5;
//     b = 6;
//     c = a * b;

//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// int  main () {
//     int a,b,c;

//     a = 30;
//     b = 5;
//     c = a / b;

//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// int  main () {
//     int a,b,c;

//     a = 15;
//     b = 6;
//     c = a % b;

//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// int  main () {
//     int a,b;

//     printf("Enter two nums");
//     scanf("%d %d", &a, &b);
//     printf("the sum is %d", a + b);

//     return 0;
// }

// int  main () {
//     int x,y;

//     printf("Enter value for x");
//     scanf("%d", &x);

//     y = (x * x + 2 * x + 4);

//     printf("value of y is %d", y);

//     return 0;
// }

// int  main () {
//     int x,y;

//     printf("Enter value for x");
//     scanf("%d", &x);

//     y = (x + 1) * (x + 2) + (x + 3) * (x + 4);

//     printf("value of y is %d", y);

//     return 0;
// }

// int  main () {
//     float x,y;

//     printf("Enter value for x");
//     scanf("%f", &x);

//     y = ((x + 1) / (x + 2)) + ((x + 3) / (x + 4));

//     printf("value of y is %f", y);

//     return 0;
// }

int main () {
    int a,b;

    printf("enter nums");
    scanf("%d %d", &a,&b);

    int c = a & b;

    printf("^ of a and b is %d", c);
    

    return 0;
}