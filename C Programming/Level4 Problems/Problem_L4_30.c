#include<stdio.h>
int sqrroot(int num) {
    int guess = 1;
    while (guess * guess <= num) {
        guess++;
    }
    return guess - 1;
}

int main(){
    int prime,i;
    for(i=99999999;i>=10000000;i--){
        if(i%2==0)
        continue;
        prime = 1;
        for(int j=3;j<sqrroot(i);j+=2){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime){
            printf("%d",i);
            break;
        }
    }
}