//program that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them
#include<stdio.h>
void main()
{
int i,arr1[10],arr2[10],sum[10];
printf("Enter first array \n");
for(i=0;i<=9;i++)
{
	printf("arr1[%d]=",i);	
	scanf("%d",&arr1[i]);
}
printf("Enter second array \n");	
for(i=0;i<=9;i++)
{
	printf("arr2[%d]=",i);	
	scanf("%d",&arr2[i]);
}	
for(i=0;i<=9;i++)
{
	sum[i]=arr1[i]+arr2[i];
}	
printf("Sum of arrays:-");	
for(i=0;i<=9;i++)
{
	printf("\nsum[%d]=%d",i,sum[i]);	
}
		
}

