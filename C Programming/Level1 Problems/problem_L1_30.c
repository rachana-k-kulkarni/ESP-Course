// Get a four-digit number from user. If the sum of the ten’s digit and
// hundred’s digit is equal to 10, and one of the digits is more than 7 then
// print “Success”, otherwise print “Failure”.
#include<stdio.h>
int main ()
{
int x,y,tens,huns,sum;
printf ("Enter A 4 Digit Number : ");
scanf("%d",&x);
tens=(x/10)%10;
huns=(x/100)%10;
sum=tens+huns;
if(sum==10){
if(tens>7 || huns>7)
printf("Success");
else
printf("Failure");
}
else
printf("Failure");
}