#include<stdio.h>
int main ()
{
int x;
int num=0;
scanf("%d",&x);
while(x!=0){
    num=num*10+(x%10);
    x=x/10;
}
printf("%d",num);
}