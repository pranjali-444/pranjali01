
//program to find the minimum and maximum element of the array 
#include <stdio.h> 
void main() 
{ 
    int a[20]  , i , n , min , max;    
    printf("Enter size of array");     
    scanf("%d",&n); 
    printf("Enter elements of array");     
    for (i=0;i<n;i++)     
    scanf("%d",&a[i]);     
    min = a[0] ;     
    max = a[0];     
    for (i=0;i<n;i++) 
    { 
        if (a[i]<min)         
        min = a[i];         
        if(a[i]>max)         
        max = a[i]; 
    } 
    printf("\nMinimum element = %d", min);     
    printf("\nMaximum element = %d", max);     
    } 
