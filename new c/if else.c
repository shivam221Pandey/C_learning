#include<stdio.h>
int main(){
    int maths;
        int english;
        int bio;
        printf("Enter your Maths marks here:\n");
        scanf("%d", &maths);
        printf("Enter your English marks here:\n");
        scanf("%d", &english);
        printf("Enter your Maths marks here:\n");
        scanf("%d", &bio);
        int sum = maths+english+bio;
        printf("your total marks is %d \n", sum);
        float percent = (sum/300)*100;
        printf("your Percentage is %f percent", percent);
return 0;
}