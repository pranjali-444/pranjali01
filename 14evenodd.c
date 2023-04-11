//program to print sum of even and odd numbers from 1 to N numbers
#include<stdio.h>
int main(){
int n,sumeven=0,sumodd=0;
printf("enter the number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i%2==0){
    sumeven=sumeven+i;
}
else{
    sumodd=sumodd+i;
}
}
printf("the sum of all even numbers upto %d is: %d \n",n,sumeven);
printf("the sum of all odd numbers upto %d is %d",n,sumodd);
return 0;
}