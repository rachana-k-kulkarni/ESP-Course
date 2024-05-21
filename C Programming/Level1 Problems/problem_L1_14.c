//Get a three-digit number from user and print the reverse of the number.
#include<stdio.h>
int main ()
{
int x,y,huns,tens,ones;
printf ("Enter A 3 Digit Number : ");
scanf("%d",&x);
ones=x%10;
tens=(x/10)%10;
huns=x/100;
y=ones*100+tens*10+huns;
printf("%d,%d,%d",huns,tens,ones);
printf ("Result = %d",y);
}