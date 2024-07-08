#include<stdio.h>
int main()
{
    int x,count=0,last2;
    scanf("%d",&x);
    while(x!=0){
        last2 =10*((x/10)%10)+(x%10);
        if(last2==16||last2==25||last2==36||last2==49||last2==64||last2==81)
        count++;
        x = x/10;
    }
    printf("%d",count);
}

