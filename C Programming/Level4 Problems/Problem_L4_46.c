#include<stdio.h>
int main(){
    char cha[50];
    int num[50];
    int i=0,j=0;
    for(i;i<50;i++){
        scanf("%c",&cha[i]);
        if(cha[i]=='\n')
        break;
    }
    cha[i]='\0';
    i = 0;
    while(cha[i]!='\0'){
        if(cha[i]>='0'&&cha[i]<='9'){
            num[j++]=cha[i]-'0';
        }
        i++;
    } 
    for(int k = 0;k<j;k++)
    printf("%d",num[k]);
}
