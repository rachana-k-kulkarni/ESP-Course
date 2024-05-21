//Get a four-digit number from user and only reverse the
//first two digits of the number, then print the number.
#include<stdio.h>
int main ()
{
int x,y,thous,huns,tens,ones;
printf ("Enter A 4 Digit Number : ");
scanf("%d",&x);
ones=x%10;
tens=(x/10)%10;
huns=(x/100)%10;
thous=x/1000;
y=thous*1000+huns*100+ones*10+tens;
printf("%d,%d,%d,%d",thous,huns,tens,ones);
printf ("Result = %d",y);
}