//Get a three-digit number from user and print the hundred’s digit.
#include<stdio.h>
int main ()
{
int x,y;
printf("Enter A 3 Digit Number : ");
scanf("%d",&x);
y=x/100;
printf("Result = %d",y);
}