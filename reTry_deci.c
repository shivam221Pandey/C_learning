#include <stdio.h>
int main()
{
    int a, arr[10], result, i = 0;
    printf("Enter a decimal number:");
    scanf("%d", &a);

    while (a != 0)
    {
        result = (a % 8);
        a = (a / 8);

        arr[i] = result;
        i++;
    }
    for (i = 1; i >= 0; i--){
        printf("%d", arr[i]);
    }
    return 0;
}
