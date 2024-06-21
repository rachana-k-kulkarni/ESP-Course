#include<stdio.h>
int main ()
{
int x;
x=11;
int sum=0;
loop: if(x < 100)
{
sum=(x%10)+(x/10);
if((sum==7)&&(x%2!=0))
printf("%d\n",x);
x++;
goto loop;
}
}