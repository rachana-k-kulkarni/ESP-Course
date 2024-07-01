#include<stdio.h>
int main ()
{
int x;
int Prime=1,sum=0;
scanf("%d",&x);
for(int i=2;i<x;i++){
    if((x%i)==0)
    Prime=0;
}
while(x!=0){
    sum = sum + (x%10);
    x =x/10;
    // printf("Sum%d\nX%d\n",sum,x);
}
if((Prime==1)&&(sum==14))
printf("Prime and sum is 14");
else if((Prime==0)&&(sum==14))
printf("Not Prime but sum is 14");
else
printf("Prime but sum is 14");
}