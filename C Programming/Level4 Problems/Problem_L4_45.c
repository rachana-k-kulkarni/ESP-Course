#include<stdio.h>
int main(){
    char num[50];
    int i=0;
    for(i;i<50;i++){
        scanf("%c",&num[i]);
        if(num[i]=='\n')
        break;
    }
    num[i]='\0';
        for(i;i>=0;i--){
        printf("%c",num[i]);
    }
    }   
