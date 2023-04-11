//program that checks whether two numbers entered by the user are equal or not
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    if(a==b){
        printf("the numbers are equal");
    }
        else{
            printf("the numbers are different");
            return 0;
        }
}