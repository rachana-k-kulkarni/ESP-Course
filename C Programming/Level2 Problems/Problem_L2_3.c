#include<stdio.h>
int main ()
{
int x;
x=1;
int sum=0;
loop: if(x < 6)
{
sum=sum+x;
x++;
goto loop;
}
printf("Sum is %d",sum);
}