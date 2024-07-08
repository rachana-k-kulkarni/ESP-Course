#include<stdio.h>
int main()
{
    int x,count=0,prime;
    scanf("%d",&x);
    while(x!=0){
        prime=1;
        for(int i=2;i<(x%10)-1;i++){
            if((x%10)%i==0)
            prime=0;
        }
        if(prime==1)
        count++;
        x=x/10;
    }
    printf("%d",count);
}

