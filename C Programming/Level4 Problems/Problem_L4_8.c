#include<stdio.h>
int main()
{
int x,y;
printf("Enter a FOUR digit Number : ");
scanf("%d",&x);
y = 1000*(x%10)+100*((x/10)%10)+10*((x/100)%10)+x/1000;
printf("The reverse of the entered number is %d\n",y);
}