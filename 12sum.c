//a program that prints the sum of all numbers up to a given number.
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number upto which you want the sum");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    sum=sum+i;
    }
    printf("the sum is: %d",sum);
    return 0;
}