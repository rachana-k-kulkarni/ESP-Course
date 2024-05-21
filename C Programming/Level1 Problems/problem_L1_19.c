//Get a three-digit number from user and make the one’s digit as 2, then print it.
#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter A 3 Digit Number : ");
scanf("%d",&x);
y=(x/10)*10+2;
printf ("Result = %d",y);
}