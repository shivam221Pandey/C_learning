#include <stdio.h>
int main()
{
    float x, y;
    int j;
    printf("enter first no. here:\t");
    scanf("%f", &x);
    printf("enter first no. here:\t");
    scanf("%f", &y);
    printf("Chose anyone of them 1 = +\t 2 = -\t 3 =/ \t 4 = *\n");
    scanf("%d", &j);
    switch (j)
    {
    case 1:
        printf("Addition of both the numbers is: %f", x + y);
        break;
    case 2:
        printf("Subtraction of both the numbers is: %f", x - y);
        break;
    case 3:
        if (y == 0)
        {
            printf("denominator cannt be  zero");
        }
        else
        {
            printf("Divison of both the numbers is:%f", x / y);
        }
        break;
    case 4:
        printf("Multplication of both the numbers is:%f", x * y);
        break;
    default:
        printf("invalid operation");
    }

    return 0;
}