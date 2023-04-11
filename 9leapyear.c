//program to check wether a given year is a leap year or not
#include<stdio.h>
int main(){
    int a;
    printf("enter the year");
    scanf("%d",&a);
    if(a%4==0){
        printf("it is a leap year");
    }
    else if(a%100==0){
        printf("it is a leap year");
    }
    else if(a%400==0){
        printf("it is not a leap year");
    }
    else{printf("it is not a leap year");}
    return 0;
}