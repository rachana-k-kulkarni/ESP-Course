// Get a three-digit number from user. If the sum of the digits is less than 10, then print
// the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10,
// then print the sum, otherwise add the digits of the sum, and print the sum.
// Note: The result should be always single digit only.
#include<stdio.h>
int main ()
{
int x,y,huns,tens,ones,sum;
printf ("Enter A 3 Digit Number : ");
scanf("%d",&x);
huns=x/100;
tens=(x/10)%10;
ones=x%10;
sum=huns+tens+ones;
if(sum<10)
printf("Sum is %d", sum);
else{
    sum=(sum/10)+(sum%10);
    if(sum<10)
    printf("Sum is %d",sum);
    else
    {
        sum=(sum/10)+(sum%10);
        printf("Sum is %d",sum);
    }
}
}