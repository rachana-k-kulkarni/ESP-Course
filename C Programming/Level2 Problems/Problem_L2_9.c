#include<stdio.h>
int main ()
{
int x;
int sum=0;
x=10;
loop: if(x < 100)
{
if(x%10==5){
    sum=sum+x;
}
x++;
goto loop;
}
printf("%d\n",sum);
}