//Program to add and multiply two matrics of order nxn 
#include <stdio.h> 
#include <conio.h> 
void main() { 
    int arr1[20][20],arr2[20][20],sum[20][20],i,j,r1,r2,c1,c2;     
    printf("enter the rows and column of the first matrix");     
    scanf("%d%d",&r1,&c1); 
    printf("enter the elements of the first matrix");     
    for(i=0;i<r1;i++) 
    { 
        for(j=0;j<c1;j++) 
        { 
            scanf("%d",&arr1[i][j]); 
        } 
    } 
    printf("enter the rows and column of the second matrix");     
    scanf("%d%d",&r2,&c2); 
    printf("enter the elements of the second matrix");     
    for(i=0;i<r2;i++) 
    { 
        for(j=0;j<c2;j++) 
        { 
            scanf("%d",&arr2[i][j]); 
        } 
    } 
    if((r1==r2)&&(c1==c2)) 
    {         for(i=0;i<r1;i++) 
        {             for(j=0;j<c1;j++) 
            {                 sum[i][j]=arr1[i][j]+arr2[i][j]; 
            } 
        }     }     else 
    {         printf("Addition is not possible"); 
    } 
    for(i=0;i<r1;i++) 
    {         for(j=0;j<c1;j++) 
        { 
        printf("%d\t",sum[i][j]); 
        }           
        printf("\n");     
        }
         getch(); 
} 
