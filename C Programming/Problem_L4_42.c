#include<stdio.h>
int main(){
    char a[100];
    int i = 0,count=0;
    for(i;i<100;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n')
        break;
    }
    a[i]='\0';
    i=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}