#include<stdio.h>
int main(){
    int nondec,count=0;
    for(int i=1000;i<=9999;i++){
        int j = i;
        nondec = 1;
        while(j!=0){
            if((j%10)<((j/10)%10))
            nondec = 0;
            j = j/10;
        }
        if(nondec)
        count++;
    }
    printf("%d",count);
}