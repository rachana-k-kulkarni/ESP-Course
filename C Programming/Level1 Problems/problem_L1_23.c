//Get a two digit number from user and subtract 5 from that number if the
//sum. of the digits of the number is odd, then print the result. Do not use “if”.
#include<stdio.h>
int main ()
{
int x,y,sum,odd;
printf ("Enter A 2 Digit Number : ");
scanf("%d",&x);
sum=(x/10)+(x%10);
odd=sum%2;
y=x-odd*5;
printf ("Result = %d",y);
}