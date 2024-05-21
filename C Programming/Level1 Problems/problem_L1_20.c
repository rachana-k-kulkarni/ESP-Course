//Get a three-digit number from user and make the ten’s digit as 0, then print it.
#include<stdio.h>
int main ()
{
int x,y,huns,ones;
printf ("Enter A 3 Digit Number : ");
scanf("%d",&x);
huns=x/100;
ones=x%10;
y=huns*100+ones;
printf ("Result = %d",y);
}