//Get a three-digit number from user and subtract 5 from that number if
//one’s digit number and 100’s digit number are same, then print the
//result. Do not use “if”.#include<stdio.h>
int main ()
{
int x,y,sum,ones,huns;
printf ("Enter A 3 Digit Number : ");
scanf("%d",&x);
ones=x%10;
huns=x/100;
y=x-(ones==huns)*5;
printf ("Result = %d",y);
}