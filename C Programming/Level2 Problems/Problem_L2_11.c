#include<stdio.h>
int main ()
{
int x;
int dig_count=1;
scanf("%d",&x);
while(x/10!=0){
    dig_count++;
    x=x/10;
}
printf("%d",dig_count);
}
