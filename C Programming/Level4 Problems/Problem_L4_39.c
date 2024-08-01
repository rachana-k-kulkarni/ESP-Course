#include<stdio.h>
int main(){
    char a[100];
    int i = 0;
    for(i;i<100;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n')
        break;
    }
    a[i]='\0';
    int num = 0;
    for(int j=0;j<i;j++){
        num = 10*num + a[j]-'0';
    }
    printf("%d\n",num);
}