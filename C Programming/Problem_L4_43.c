#include<stdio.h>
int main(){
    char a[100];
    int i = 0,num=1;
    for(i;i<100;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n')
        break;
    }
    a[i]='\0';
    for(int j=0;j<i;j++){
        if((a[j]<'0')||(a[j]>'9')){
            num = 0;
            break;
        }
    }
    if(num)
    printf("Valid number");
    else
    printf("Not a valid number");
}