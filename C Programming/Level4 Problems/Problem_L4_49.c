#include<stdio.h>
int main(){
    int i = 0;
    char cha[50];
    int num[50]={1,4,5,8,7,6,3};
    i =sizeof(num)/sizeof(num[0])-1;
    for(int j=0;j<i;j++){
        cha[j]=num[j]+'0';
        if(cha[j]=='0'){
            cha[j]='\0';
            break;
        }
    }
    printf("%s",cha);
}
