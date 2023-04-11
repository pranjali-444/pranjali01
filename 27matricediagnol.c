//program that finds the sum of diagonal elements of a mxn matrix
#include <stdio.h> 
#include<conio.h> 
void main() { 
    int i, j, m, n,a = 0,sum=0;     
    int matrix[10][10];     
    printf("enter the order of matrix");     
    scanf("%d%d",&m,&n);     
    printf("enter the elements of matrix");         
    for(i=0;i<m;i++)  
        { 
            for(j=0;j<n;j++) 
            { 
                scanf("%d", &matrix[i][j]); 
            } 
        } 
 if(m==n) 
        { 
        for(i=0;i<m;i++) 
        { 
            sum=sum+matrix[i][i];             
            a=a+matrix[i][m-i-1]; 
        } 
         
        printf("\nMain diagonal elements sum is = %d\n",sum);         
        printf("Off-diagonal elements sum is = %d\n",a); 
        } 
        else 
       { 
        printf("not a square matrix\n"); 
       } 
getch(); 
}