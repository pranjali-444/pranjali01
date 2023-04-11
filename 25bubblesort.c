//program to sort the elements of the array in ascending order using Bubble Sort technique 
#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
    int a[20]  , i , n , j , temp;     
    printf("Enter size of array");     
    scanf("%d",&n); 
    printf("Enter elements of array");     
    for (i=0;i<n;i++)     
    scanf("%d",&a[i]);     
    for(i=1 ; i<=n-1; i++) 
    { 
        for(j=0;j<=n-i-1;j++) 
    { 
        if(a[j]>a[j+1]) 
        { 
        temp=a[j];         
        a[j]=a[j+1];         
        a[j+1]=temp; 
         } 
    } 
    } 
    printf("\nThe sorted array is \n");     
    for(i=0;i<n;i++)     
    printf("%d  ",a[i]); 
} 
