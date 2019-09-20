#include <stdio.h>

// 01 to check if the score is century or half century using if-else-if
// int main () {
//     int a;
//     printf("enter score\n");
//     scanf("%d", &a);

//     // if (a == 50) {
//     //     printf("congrats! it is a half century");
//     // } else if (a == 100) {
//     //     printf("woalah! it is a century");
//     // } else {
//     //     printf("well played");
//     // }

//     // using switch

//     switch (a) {
//         case 50:
// 					printf("congrats! it is a half century");
// 				case 100:
// 					printf("woalah! it is a century");
// 				default:
// 					printf("well played");
//     }

//     return 0;
// }

//02 to check if the nmber is even and print "special" if the number is greater than 5 and less than 15. and print "great" if the number lies in inclusive range (30, 50).

// int main () {

// 	int a;
// 	printf("enter a number");
// 	scanf("%d", &a);

// 	if (a % 2 == 0) {
// 		if (a > 5 && a < 15) {
// 			printf("special");
// 		} else {
// 			printf("yup! even but nothing more than that");
// 		}
// 		if (a >= 30 && a <= 50) {
// 			printf("yup! even but nothing more than that");
// 		} else {

// 		}
// 	} else {
// 		printf("the number is odd");
// 	}


// 	return 0;
// }


// 03 and 04 printing the grades according the marks a student got and also printing the class.

int main () {
	int a;
	int grade;

	printf("enter your marks\n");
	scanf("%d", &a);

	if (a >= 81) {
		printf(" you got A+\n");
		grade = 1; // for first class
	}
	if (a >= 71 && a <= 80) {
		printf(" you got A\n");
		grade = 1; // for first class
	}
	if (a >= 61 && a <= 70) {
		printf(" you got B+\n");
		grade = 1; // for first class
	}
	if (a >= 51 && a <= 60) {
		printf(" you got B\n");
		grade = 2; // for second class
	}
	if (a >= 41 && a <= 50) {
		printf(" you got C\n");
		grade = 2; // for second class
	}
	if (a >= 33 && a <= 40) {
		printf(" you got D\n");
	}

	if (a < 33) {
		printf(" you are fail or detainded\n");
	}

	switch (grade) {
		case 1: 
			printf("you belong to first class!\n");
			break;
		case 2:
			printf("you belong to second class!\n");
			break;
		default:
			printf("you belong to third class\n");
	}
	
}