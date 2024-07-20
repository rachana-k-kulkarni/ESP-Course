#include<stdio.h>
int main(){
    int sum=0,count=0;
    for(int i=1;i<100000;i++){
        int temp=i;
        sum = 0;
        while(temp!=0){
            sum=sum+(temp%10);
            temp = temp/10;
        }
        if(sum==14)
        count++;
    }
    printf("%d",count);
}