//total marks and percentage
#include<stdio.h>
int main () 
{
    int a , b , c , d , e , sum ;
    float percentage;
    printf ("   ----------MARKS OUT OF 100---------   \n enter the marks of chemistry: ");
    scanf ("%d",&a);
    printf ("enter the marks of electronics: ");
    scanf ("%d",&b);
    printf ("enter the marks of evs: ");
    scanf ("%d",&c);
    printf ("enter the marks of maths: ");
    scanf ("%d",&d);
    printf ("enter the marks of pps: ");
    scanf ("%d",&e);
    sum = a + b + c + d + e ;
    printf ("the sum is: %d \n",sum);
    percentage = (sum/500.0)*100;
    printf("your percentage is : %f",percentage);
    return 0 ;
}