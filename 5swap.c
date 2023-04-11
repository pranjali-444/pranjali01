//program that swaps the value of two variables using a third variable
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the first number:\n a: ");
    scanf("%d",&a);
    printf("enter the second number:\n b :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("--------SWAPPING------- \na:%d\n",a);
    printf("b:%d",b);
    return 0;
}