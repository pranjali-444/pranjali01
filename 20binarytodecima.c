//program to convert decimal to binary 
#include <stdio.h> 
void main() 
{ 
    int n,i,r,bin; 
    printf("Enter a decimal Number");
    scanf("%d",&n);     
    bin=0;i=1; 
    while(n!=0) 
    {         
        r=n%2;         
        bin=bin+r*i;         
        i=i*10;         
        n=n/2; 
    } 
printf("binary number is %d",bin);     
} 
