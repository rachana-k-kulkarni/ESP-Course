#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
y = (x%10)+((x/10)%10)+x/100;
printf("The sum of the digits of entered number is %d\n",y);
}