#include<stdio.h>
int main ()
{
int x,count=0;
scanf("%d",&x);
while(x!=0){
    if(((x%10)==1)||((x%10)==4)||((x%10)==9))
    count++;
    x=x/10;
}
printf("%d\n",count);
}