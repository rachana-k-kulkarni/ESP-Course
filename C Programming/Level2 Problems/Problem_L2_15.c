#include<stdio.h>
int power(int a,int b){
    int y=1;
    for(int i=1;i<=b;i++)
    y=y*a;
    return y;
}
//Faced Problems in digits for long examples due to rounding off issue 
int main ()
{
int x;
int n;
int dig_count=1;
scanf("%d",&x);
n = x;
while(n/10!=0){
    n=n/10;
    dig_count++;
}
printf("DIgcount%d\n",dig_count);
int last = x%10;
int first = x/((int)power(10,dig_count-1));
int digits = ((x)-(first*(power(10,dig_count-1))))/10;
printf("First%d\nLast%d\nDigits%d\nX%d\n",first,last,digits,x);
if((x%2)==0)
printf("%d",x);
else if(last/2!=0){
    first = first-1;
    printf("%d%d%d\n",first,digits,last);
}
return 0;
}
