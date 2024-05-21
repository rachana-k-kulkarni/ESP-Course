//Get a two-digit number from user and make the ten’s digit 1, then print it.
#include<stdio.h>
int main ()
{
int x,y,ones;
printf ("Enter A 2 Digit Number : ");
scanf("%d",&x);
ones=x%10;
y=10+ones;
printf ("Result = %d",y);
}