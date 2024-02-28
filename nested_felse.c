#include <stdio.h>
int main(){
    int i, j;
    printf("Enter a number to take input:\t");
    scanf("%d", &i);
    printf("Enter a number to take input:\t");
    scanf("%d", &j);
    if(i>0){
        if(j<5){
            printf("our 1st input is greater than zero and second is less than 5 ");
        }
       else if(j>5){
            printf("its second case where 2nd case is greater than 5");
        }
    }
return 0;
}