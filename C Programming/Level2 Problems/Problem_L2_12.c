#include<stdio.h>
int main ()
{
int x;
int sum=0;
int dig_count=1;
scanf("%d",&x);
while(x/10!=0){
    sum=sum+x%10;
    x=x/10;
}
printf("%d",x+sum);
}