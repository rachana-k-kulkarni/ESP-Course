// Get two-digit number from user. If the sum of the digits is 10 then print
// “Success”, otherwise print “Failure”.
#include<stdio.h>
int main ()
{
int x,y,sum,tens,huns;
printf ("Enter A 2 Digit Number : ");
scanf("%d",&x);
sum=(x/10)+(x%10);
if(sum==10)
printf("Success");
else
printf("Failure");
}