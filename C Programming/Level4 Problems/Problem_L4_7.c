#include<stdio.h>
int main()
{
int x,y;
printf("Enter a THREE digit Number : ");
scanf("%d",&x);
y = 100*(x%10)+10*((x/10)%10)+x/100;
printf("The reverse of the entered number is %d\n",y);
}