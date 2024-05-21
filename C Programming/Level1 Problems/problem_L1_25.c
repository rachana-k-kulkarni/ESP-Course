// Get a four-digit number from user and subtract 5 from that number if
// ten’s digit position and 100’s digit position is same, then print the result.
// Do not use “if”.
#include<stdio.h>
int main ()
{
int x,y,sum,tens,huns;
printf ("Enter A 4 Digit Number : ");
scanf("%d",&x);
tens=(x/10)%10;
huns=(x/100)%10;
y=x-(tens==huns)*5;
printf ("Result = %d",y);
}