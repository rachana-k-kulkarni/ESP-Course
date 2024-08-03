#include<stdio.h>
int main(){
    int num1[50] = {1,2,3,4,5,6,7,8};
    int num2[50] = {2,4,6,8,10,12,14};
    int sum[51] = {0};
    int i = 0;
    while((num1[i]!=0)||(num2[i])){
        sum[i]=num1[i]+num2[i];
        i++;
    }
    i = 0;
    while(sum[i]!=0){
        printf("%d\n",sum[i]);
        i++;
    }
}
