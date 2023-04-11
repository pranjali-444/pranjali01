/*Program that calculates the Simple Interest and Compound Interest. 
The Principal, Amount, Rate of Interest and Time are entered through the keyboard.*/
#include<stdio.h>
#include<math.h>
int main (){
    float principal,time,rate,si,ci;
    printf("Enter the principal amount :  ");
    scanf("%f",&principal);
    printf("Enter the rate of interest (in percent ) :  ");
    scanf("%f",&rate);
    printf("Enter the time (in years) :  ");
    scanf("%f",&time);
    si=principal*rate*time;
    printf("-----------SIMPLE INTEREST------------\nThe simple interest is : %f\n",si);
    ci=principal*(pow((1+rate/100),time));
    printf("-----------COMPOUND INTEREST------------\nThe compound interest is : %f",ci);
    return 0;
}