#include<stdio.h>
int main()
{
int x,y;
printf("Enter a TWO digit Number : ");
scanf("%d",&x);
y = 10*(x%10)+x/10;
printf("The reverse of the entered number is %d\n",y);
}