//program to search an element in array using linear search
#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
    int a[20]  , i , n , f=0 ,item;     
    printf("Enter size of array");     
    scanf("%d",&n); 
    printf("\nEnter elements of array");     
    for (i=0;i<n;i++)     
    scanf("%d",&a[i]); 
    printf("\nEnter element to be searched");     
    scanf("%d",&item);     
    for (i=0;i<n;i++) 
    { 
        if (a[i]== item) 
        {         
        f=1; 
        printf ("\nItem %d found at %d", item , (i+1));         
        break; 
        } 
    } 
    if(f==0)     
    printf("Item not found"); 
    } 
 
