#include<stdio.h>
int main(){
    int count=0;
    for(int i=1;i<100000;i++){
        int rev=0,j = i;
        while(j!=0){
            rev = 10*rev + (j%10);
            j = j/10;
        }
        if(rev==i)
        count++;
    }
    printf("%d\n",count);
}