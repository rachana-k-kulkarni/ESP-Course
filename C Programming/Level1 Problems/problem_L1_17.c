//Get a two-digit number from user and make the one’s digit as 0, then print it.
#include<stdio.h>
int main ()
{
int x,y,tens;
printf ("Enter A 2 Digit Number : ");
scanf("%d",&x);
tens=x/10;
y=tens*10;
printf ("Result = %d",y);
}