//Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
#include<stdio.h>
int main ()
{
int x1,x2,y,sum,diff;
printf ("Enter two 2 Digit Numbers : ");
scanf("%d",&x1);
scanf("%d",&x2);
if(x1>x2)
sum=(x1/10)+(x1%10);
else if(x2>x1)
sum=(x2/10)+(x2%10);
else
sum=(x2/10)+(x2%10);
printf("Sum is %d", sum);
}