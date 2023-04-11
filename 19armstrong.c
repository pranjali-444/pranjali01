//program to print Armstrong numbers from 1 to 100
#include<stdio.h>  
#include<math.h> 
void main() 
{
int i,n,sum,d,c; 
for(i=1;i<=100;i++) 
{ 
  sum=0;
  c=0;
  n=i; 
  while(n!=0) 
{     
    c++;
    n=n/10; 
}
    n=i; 
    while(n!=0) 
{   
    d=n%10;
    sum=sum+pow(d,c); 
    n=n/10; 
} 
    if(i==sum) 
    printf("%d\t",i); 
} 
} 
