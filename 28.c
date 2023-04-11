//program to implements strlen(),strcat(),strcpy() using the concept of function
#include<stdio.h> 
#include<conio.h> 
int str_len(char*); 
void main() 
{ 
    char str[10];     
    int len; 
    printf("Enter the string:");     
    scanf("%s",str);     
    len=str_len(str); 
    printf("the length of the string is:%d",len);     
    getch(); 
    } 
    int str_len(char*s1) 
{ 
    int i;     
    for(i=0;s1[i]!='\0';i++) 
    { 
        ;     
    }     
    return i; 
} 
