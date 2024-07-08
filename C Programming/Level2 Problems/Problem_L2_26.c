#include<stdio.h>
int main(){
    int temp,dig=0,count=0;
    for(int x=1;x<100000;x++){
        count=0,temp=x;
        while(temp>0){
        dig = dig + (temp%10);
        temp = temp/10;
        }
        if(dig=14);
        count++;

    }
    printf("%d",count);
}