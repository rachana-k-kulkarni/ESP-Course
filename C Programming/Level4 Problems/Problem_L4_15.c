#include<stdio.h>
int main(){
    int count=0;
    for(int i=10;i<100;i++){
        if(i%2!=0)
        count++;
    }
    printf("%d",count);
}