//program that simply takes elements of the array from the user and finds the sum of these elements
 #include <stdio.h> 
 void main() 
{ 
    int arr[20] , i , n , sum=0 ;     
    printf("Enter size of array");     
    scanf("%d",&n); 
    printf("\nEnter elements of array");     
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]);         
        sum=sum+arr[i]; 
    } 
    printf("\nSum= %d",sum); 
} 

