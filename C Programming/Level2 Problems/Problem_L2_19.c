#include<stdio.h>
int main ()
{
int x;
int NotPrime=0;
scanf("%d",&x);
int middle2 = (10)*((x/100)%10)+((x/10)%10);
printf("Middle is %d",middle2);
for(int i=2;i<middle2;i++){
    if((middle2%i)==0)
    NotPrime=1;
}
if(NotPrime==0)
printf("Prime");
else
printf("Not Prime");
}