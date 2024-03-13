#include <stdio.h>
int main()
{
    int j, result, i = 0;
    int arr[10];
    printf("Enter Binary number here:");
    scanf("%d", &j);
    while (j != 0)
    {
        result = (j % 2);
        j = j / 2;
        arr[i] = result;
        i++;
        // printf("%d", result);
    }
    for(i; i > 0; i--){
        printf("%d", arr[i]);}

    return 0;
}


// 110