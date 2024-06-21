#include<stdio.h>
int main ()
{
int x;
x=10;
int sum=0;
loop: if(x < 100)
{
sum=(x/10)+(x%10);
if((sum==6)&&(x%2==0))
printf("%d\n",x);
x++;
goto loop;
}
}