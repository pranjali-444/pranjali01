//a program that accepts marks of five subjects and finds percentage and prints grades according to the following criteria
#include<stdio.h>
int main(){
    int a,b,c,d,e,grade;
    printf("--------------MARKS OUT OF 100--------------\nEnter the marks of Chemistry :  ");
    scanf("%d",&a);
    printf("Enter the marks of Electronics :  ");
    scanf("%d",&b);
    printf("Enter the marks of PPS :  ");
    scanf("%d",&c);
    printf("Enter the marks of EVS :  ");
    scanf("%d",&d);
    printf("Enter the marks of Maths :  ");
    scanf("%d",&e);
    float per;
    per=((a+b+c+d+e)/5);
    printf("PERCENTAGE : %f\n",per);
    if(per>=90){printf("Grade 'A'");}
    else if(per>=80 && per<90){printf("Grade 'B'");}
    else if(per>=60 && per<80){printf("Grade 'C'");}
    else if(per<60){printf("Grade 'D'");}
    return 0;
}