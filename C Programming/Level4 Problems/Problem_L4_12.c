#include<stdio.h>
int main()
{
int x,y=0;
printf("Enter the Number : ");
scanf("%d",&x);
while(x!=0){
    y = (y*10) + (x%10);
    x = x/10;
}
printf("The reverse of the entered number is %d\n",y);
}