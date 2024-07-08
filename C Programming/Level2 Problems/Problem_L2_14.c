#include<stdio.h>
int power(int a,int b){
    int y=1;
    for(int i=1;i<=b;i++)
    y=y*a;
    return y;
}
int main ()
{
int x;
int n;
int dig_count=1;
scanf("%d",&x);
n = x;
while(n/10!=0){
    dig_count++;
    n=n/10;
}
int last = x%10;
int first = x/((int)power(10,dig_count-1));
int digits = ((x)-(first*(int)(power(10,dig_count-1))))/10;
printf("%d%d%d",last,digits,first);
return 0;
}
