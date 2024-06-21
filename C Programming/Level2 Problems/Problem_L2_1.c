#include<stdio.h>
int main ()
{
int x;
x =1;
loop: if(x < 6)
{
printf("%d",x);
x++;
goto loop;
}
}