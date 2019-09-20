#include <stdio.h>

// int main () {
//     int a;
//     printf("enter a number");
//     scanf("%d", &a);

//     if (a < 10) {
//         if (a == 1) {
//             printf("the value of a is 1");
//         } else {
//             printf("value %d is greater than 1", a);
//         } 
//     }   else {
//             printf("value %d is greater than 10", a);
//     }

//     return 0;
// }

// int main () {
//   while(1) {
//     int a;
//     printf("enter a \n");
//     scanf("%d", &a);

		

//     if (a >= 75) {
//       printf("1st\n");
//     } else if (a >= 55 && a <= 74) {
//       printf("2nd\n");
//     } else if (a >= 40 && a <= 54) {
//       printf("3rd\n");
//     } else {
//       printf("other\n");
//     }
//   }

// 	return 0;
// }

// int main () {
// 	int a;
// 	printf("enter a \n");
//   scanf("%d", &a);
// 	a > 10 ? 
// 		printf("a is greater than 10\n") :
// 		printf("a is less than 10\n");

// 	return 0;
// }

// int main () {
// 	int a;

// 	printf("enter the weekday!\n");
// 	scanf("%d", &a);

// 	switch (a) {
// 		case (1):
// 			printf("monday");
// 			break;
// 		case (2):
// 			printf("tuesday");
// 			break;
// 		case (3):
// 			printf("wednesday");
// 			break;
// 		case (4):
// 			printf("thursday");
// 			break;
// 		case (5):
// 			printf("friday");
// 			break;
// 		case (6):
// 			printf("saturday");
// 			break;
// 		case (7): 
// 			printf("sunday");
// 			break;
// 		default:
// 			printf("invalid input");
// 	}

// }


int main () {
	int a;
	int c;
	printf("enter a number");
	scanf("%d", &a);

	if (a < 5) {
		c = 1;
	} else if (a < 10) {
		c = 2;
	} else if (a < 15) {
		c = 3;
	}

	switch (c) {
		case 1:
			printf("number is less than 5");
			break;
		case 2: 
			printf("number is less than 10");
			break;
		case 3:
			printf("number is less than 15");
			break;
		default:
			printf("out of range");
	}
}