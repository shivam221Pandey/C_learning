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
        int total = 300;
        int sum = maths+english+bio;
        float percentage = ((float)sum / total) * 100.0;
        printf("your total marks is %d out of %d \n", sum, total);
        
        printf("your Percentage is %.2f percent \n", percentage);
        if(percentage >= 95){
            printf("Your Grade is A");
        }
        else if(percentage >= 90){
            printf("Your Grade is B");
        }
        else if(percentage >= 80){
            printf("Your Grade is C");
        }
        else if(percentage >= 70){
            printf("Your Grade is D");
        }
        else if(percentage >= 40){
            printf("Your Grade is E");
        }
        else if(percentage < 40){
            printf("Your Grade is F");
        }
        
return 0;
}