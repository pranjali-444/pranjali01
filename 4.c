//program that accepts the temperature in centigrade and converts it into fahreheit
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in centigrade");
    scanf("%f",&c);
    f=((9*(c/5))+32);
    printf("The temperature in farenheit is : %f",f);
return 0;
}