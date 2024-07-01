#include<stdio.h>
int main ()
{
int x,n,count=0;
scanf("%d",&x);
n=x;
while(n/10!=0){
    x=x/10;
    if((10*(x%10)+(n%10))%2!=0)//combined 2 digits
    count++;
    n=n/10;
}
printf("%d\n",count);
}