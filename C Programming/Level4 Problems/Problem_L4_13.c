#include<stdio.h>
int main()
{
int x,y=0;
printf("Enter the Number : ");
scanf("%d",&x);
while(x){
    y = y+(x%10);
    x = x/10;
}
printf("The sum of the digits of entered number is %d\n",y);
}