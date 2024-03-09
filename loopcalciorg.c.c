// #include <stdio.h>

// int main() {
//     float x, y;
//     int j;

//     do {
//         printf("Enter first number: ");
//         scanf("%f", &x);
//         printf("Enter second number: ");
//         scanf("%f", &y);
//         printf("Choose an operation:\n1 = Addition (+)\n2 = Subtraction (-)\n3 = Division (/)\n4 = Multiplication (*)\n5 = Exit\n");
//         scanf("%d", &j);

//         switch (j) {
//             case 1:
//                 printf("Addition of both the numbers is: %f\n", x + y);
//                 break;
//             case 2:
//                 printf("Subtraction of both the numbers is: %f\n", x - y);
//                 break;
//             case 3:
//                 if (y == 0) {
//                     printf("Denominator cannot be zero.\n");
//                 } else {
//                     printf("Division of both the numbers is: %f\n", x / y);
//                 }
//                 break;
//             case 4:
//                 printf("Multiplication of both the numbers is: %f\n", x * y);
//                 break;
//             case 5:
//                 printf("Program is complete.\n");
//                 break;
//             default:
//                 printf("Invalid operation.\n");
//         }
//     } while (j != 5);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j;
    printf("1st number:");
    scanf("%d", &i);
    printf("2ND number:");
    scanf("%d", &j);
   
    (i == j) ? printf("Both numbers are equal") : ( (i > j) ? printf("1st no. is greater than 2nd") : printf("2nd number is greater than 1st"));
    return 0;
}



// 8->1000, 17-> 10001
// 