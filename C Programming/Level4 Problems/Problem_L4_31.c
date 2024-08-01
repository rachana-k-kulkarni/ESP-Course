#include<stdio.h>
int main(){
    int count = 1;
    for(int i=0;i<=1000;i++){
        int j = i;
        while(j!=0){
            int dig = j%10;
            if(dig ==0)
            count++;
            j = j/10;
        }
    }
    printf("%d",count);
}