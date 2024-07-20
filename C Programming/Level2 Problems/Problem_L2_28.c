#include<stdio.h>
int main(){
    int a=0,b=0,small,hcf=1,lcm;
    scanf("%d %d",&a,&b);
    small = a < b ? a : b;
    for(int i=2;i<small;i++){
        if((a%i==0)&&(b%i==0))
        hcf = i;
    }
    lcm = (a*b)/hcf;
    printf("%d",lcm);
}