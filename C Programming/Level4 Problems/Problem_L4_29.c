#include<stdio.h>
int main(){
    int sum =0,prime;
    for(int i=1000;i<10000;i++){
        prime = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime)
        sum = i;
    }
    printf("%d",sum);
}
