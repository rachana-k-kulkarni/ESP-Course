#include<stdio.h>
int main(){
    int count =0;
    for(int i=0;i<10;i++){
        if(i%2!=0)
        count++;
    }
    printf("%d",count);
}