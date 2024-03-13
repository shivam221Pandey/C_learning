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
        arr[i] = result; //0,1,2 -> [0,1,1,_,_,_,_,_,_,_]
        i++; //1, 2, 3
        // printf("%d", result);
    }
    for(i-1; i >= 0; i--){
        printf("%d", arr[i]);
        }

    return 0;
}


// 110

// o/p -> -211