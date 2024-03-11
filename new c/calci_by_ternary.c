    #include <stdio.h>
    // int main()
// {
//     int a, b, c;
//     printf(" Enter 1st number: \n");
//     scanf("%d", &a);
//     printf(" Enter 2nd number: \n");
//     scanf("%d", &b);
//     printf("chose any one: \n 1 = add\n 2 = Substract\n 3 = multiply\n 4 = devide\n ");
//     scanf(" %d ", &c);
//     // need to check
//     ( c == 1 ) ? printf("sum = %d\n", (a + b) ) :( (c == 2)  ? printf("subtract = %d\n", ( a - b ) )  :(  (c == 3) ? printf("multiply = %d\n", ( a * b ) ) : ( (c == 4) ? printf(" division = %d\n", ( a / b ) ) : printf("Chose right condition "))));
//     return 0;
// }

int main() {
    int a, b, c;
    
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    
    printf("Choose any one:\n1 = add\n2 = Subtract\n3 = Multiply\n4 = Divide\n");
    scanf("%d", &c);
    
    c == 1 ? printf("Sum = %d\n", (a + b)) :c == 2 ? printf("Subtract = %d\n", (a - b)) :  c == 3 ? printf("Multiply = %d\n", (a * b)) :c == 4 ? (b != 0 ? printf("Division = %d\n", (a / b)) : printf("Cannot divide by zero\n")) : printf("Choose the right condition\n");

    return 0;
}