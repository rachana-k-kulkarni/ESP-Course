#include<stdio.h>
int main ()
{
int x,primeCount=0;
for(x=2;x<=10;x++){
    int prime = 1;
    for(int i=2;i<x;i++){
    if((x%i)==0){
        prime=0;
        break;
    }
}
if(prime==1)
primeCount++;
}
printf("%d\n",primeCount);
}