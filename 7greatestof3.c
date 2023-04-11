//program to find the greatest of three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("'a' is the greatest of the three numbers");
    }
    else if(b>a && b>c){
      printf("'b' is the greatest of the three numbers");  
    }
    else if(c>a && c>b){
    printf("'c' is the greatest of the three numbers");
    }
    else{
        printf("the numbers are equal");
    }
    return 0;
}