// Get a four-digit number from user. If the sum of the ten’s digit and
// hundred’s digit is greater than 10, then print “Success”, otherwise print
// “Failure”.
#include<stdio.h>
int main ()
{
int x,y,sum;
printf ("Enter A 4 Digit Number : ");
scanf("%d",&x);
sum=(x/10)%10+(x/100)%10;
if(sum>10)
printf("Success");
else
printf("Failure");
}