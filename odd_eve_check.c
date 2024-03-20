#include <stdio.h>
int main()
{
    int a;
    printf("Enter a num here:");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("Given num is even num") : printf("its a odd num");
    return 0;
}