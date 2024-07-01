#include<stdio.h>
int main ()
{
int x;
int NotPrime=0;
scanf("%d",&x);
int last2 = (10)*((x/10)%10)+(x%10);
for(int i=2;i<last2;i++){
    if((last2%i)==0)
    NotPrime=1;
}
if(NotPrime==0)
printf("Prime");
else
printf("Not Prime");
}