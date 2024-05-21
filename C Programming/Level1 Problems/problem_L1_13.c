//Get a two-digit number from user and print the reverse of the number.
#include<stdio.h>
int main ()
{
int x,y,tens,ones;
printf ("Enter A 2 Digit Number : ");
scanf("%d",&x);
ones=x%10;
tens=x/10;
y=ones*10+tens;
printf("%d,%d",tens,ones);
printf ("Result = %d",y);
}