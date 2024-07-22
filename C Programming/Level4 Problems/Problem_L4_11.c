#include<stdio.h>
int main()
{
int x,y;
printf("Enter a FOUR digit Number : ");
scanf("%d",&x);
y = (x%10)+((x/10)%10)+((x/100)%10)+x/1000;
printf("The sum of the digits of entered number is %d\n",y);
}