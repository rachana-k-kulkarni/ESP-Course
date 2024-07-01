#include<stdio.h>
int main ()
{
int x;
int NotPrime=0;
scanf("%d",&x);
for(int i=2;i<x;i++){
    if((x%i)==0)
    NotPrime=1;
}
if(NotPrime==0)
printf("Prime");
else
printf("Not Prime");
}