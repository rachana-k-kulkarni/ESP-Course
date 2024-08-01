#include<stdio.h>
int main(){
    char a[100];
    int i =0;
    for(i;i<100;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n')
        break;
    }
    a[i]='\0';
    for(int j=0;j<i;j++){
        printf("%c",a[j]);
    }
}