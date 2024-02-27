#include<stdio.h>
int main(){
    int i, n;
    int t1 = 0, t2 = 1;
    int nextterm = t1 + t2;

    printf("Enter the sequence of series:\n");
    scanf("%d", &n);
    printf("the series is \n %d, %d,", t1, t2);
    for(i=3; i<=n; ++i){
        printf("%d, ", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
        
    }
  
    return 0;
} 


























    /*for(i=0;i<5;i++){
    printf("shiv ",i);}*/
   /* while(i<100){
        printf("hey",i);
        i--;
    }*/
    /*    do{
        printf("jerry");
        i++;
    }
    while(i<0);*/


  // int maths;
    // int english;
    // int bio;
    // printf("Enter your Maths marks here:\n");
    // scanf("%d", &maths);
    // printf("Enter your English marks here:\n");
    // scanf("%d", &english);
    // printf("Enter your Maths marks here:\n");
    // scanf("%d", &bio);
    // int sum = maths+english+bio;
    // printf("your total marks is %d \n", sum);


     // int i = 4;  
    // switch(i){
    //     case 1:
    //         printf("TOday is Monday");
    //         break;
    //     case 2:
    //         printf("Today is TUsday");
    //     case 4:
    //         printf("Today is iudk day");
    //         break;





    //    int i;
//    printf("Enter a number here:\n");
//    scanf("%d", &i);
//     printf("hey there this is your num\n20%d", i);