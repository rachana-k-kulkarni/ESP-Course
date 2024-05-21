//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
#include<stdio.h>
int main ()
{
int x,y,odd;
printf ("Enter A Number : ");
scanf("%d",&x);
odd=x%2;
y=x-odd*5;
printf ("Result = %d",y);
}