// Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
// numbers. Print the sum of all the digits of the number whose sum of one’s and
// hundred’s digits is bigger.
#include<stdio.h>
int main ()
{
int x1,x2,y,sum1,sum2,sum;
printf ("Enter two 3 Digit Numbers : ");
scanf("%d",&x1);
scanf("%d",&x2);
sum1=(x1/100)+(x1%10);
sum2=(x2/100)+(x2%10);
if(sum1>sum2)
sum=sum1+(x1/10)%10;
else
sum=sum2+(x2/10)%10;
printf("Sum is %d",sum);
}