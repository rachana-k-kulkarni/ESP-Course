#include<stdio.h>
int main(){
    int max;
    for(int i=1000;i<=9999;i++){
        if((i%63)==0)
        max = i;
    }
    printf("%d",max);
}
