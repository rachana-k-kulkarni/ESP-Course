//Get a number from user and subtract 5 from that number if the number’s
//ten’s position digit is odd, then print the result. Do not use “if”.
#include<stdio.h>
int main ()
{
int x,y,odd,tens;
printf ("Enter A Number : ");
scanf("%d",&x);
tens=x/10;
odd=tens%2;
y=x-odd*5;
printf ("Result = %d",y);
}