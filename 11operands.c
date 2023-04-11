/*program that takes two operands and one operator from the user, perform the operation, 
and prints the result by using Switch statement*/
#include<stdio.h>
int main(){
    char op;
    double a,b;
    printf("Enter an operand (+,-,*,/): ");
    scanf("%ch",&op);
    printf("Enter a number: ");
    scanf("%lf",&a);
    printf("Enter second number: ");
    scanf("%lf",&b);
    switch(op){
        case'+':
            printf("%lf+%lf =%lf",a,b,a+b);
            break;
        case'-':
            printf("%lf-%lf=%lf",a,b,a-b);
            break;
        case'*':
            printf("%lfX%lf=%lf",a,b,a*b);
            break;
        case'/':
            printf("%lf\\%lf=%lf",a,b,a/b);
            break;
        default:
            printf("Wrong operand");
    }
}

