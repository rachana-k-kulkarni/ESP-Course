// Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then
// print the sum, otherwise print the difference.
#include<stdio.h>
int main ()
{
int x1,x2,y,sum,diff;
printf ("Enter two 2 Digit Numbers : ");
scanf("%d",&x1);
scanf("%d",&x2);
sum=x1+x2;
if(sum<100)
printf("Sum is %d", sum);
else{
    if(x1>x2)
    diff=x1-x2;
    else if(x1<x2)
    diff=x2-x1;
    else
    diff=0;
    printf("Difference is %d",diff);
}
}