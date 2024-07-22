#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=100;i<1000;i++){
        if(i%2!=0)
        sum = sum + i;
    }
    printf("%d",sum);
}