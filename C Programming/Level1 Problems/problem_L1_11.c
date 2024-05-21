//Get a two-digit number from user and print sum the digits.
#include<stdio.h>
int main ()
{
int x,y,tens,ones;
printf ("Enter A 2 Digit Number : ");
scanf("%d",&x);
ones=x%10;
tens=x/10;
printf("%d",ones);
printf ("Result = %d",tens+ones);
}