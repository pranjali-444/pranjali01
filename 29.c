//program to swap two elements using the concept of pointers
#include <stdio.h> 
#include<conio.h> 
void swap(int *,int*); 
void main() {   
    int a,b;   
    printf("enter the value of a:");   
    scanf("%d",&a);   
    printf("enter the value of b:");   
    scanf("%d",&b);   
    swap(&a,&b);   
    printf("the value of a and b after being swaped is%d\t%d:",a,b);   
    getch(); 
    } 
    void swap(int*a1,int*b1) 
{   int temp;     
    temp=*a1;     
    *a1=*b1; 
    *b1=temp; 
} 
