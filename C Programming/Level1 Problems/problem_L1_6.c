//Get a two-digit number from user and print the one’s digit.
#include<stdio.h>
int main ()
{
int x,y;
scanf("Enter a 2 digit Number : %d",&x);
y=x%10;
printf("Result = %d",y);
}