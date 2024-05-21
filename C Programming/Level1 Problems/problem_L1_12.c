//Get a three-digit number from user and print sum the digits.
#include<stdio.h>
int main ()
{
int x,y,huns,tens,ones;
printf ("Enter A 3 Digit Number : ");
scanf("%d",&x);
ones=x%10;
tens=(x/10)%10;
huns=x/100;
printf("%d,%d,%d",huns,tens,ones);
printf ("Result = %d",tens+ones+huns);
}