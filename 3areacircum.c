//Write a program to calculate the area and circumference of a circle.
#include<stdio.h>
int main()
{
    float r,area,circum,pi=3.14;
    printf("enter the radius of the circle :  ");
    scanf("%f",&r);
    circum=2*pi*r;
    area=pi*r*r;
    printf("the circumference of the circle is :  %f\n",circum);
    printf("the area of the circle is :  %f",area);
    return 0;

}