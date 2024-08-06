#include<stdio.h>
int main(){
    char arr[50];
    char cha;
    int i=0,count = 0;
    scanf("%50s\n",arr);
    scanf("%c",&cha);
    while(arr[i]!='\0'){
        if(arr[i]==cha)
        count++;
        i++;
    }
    printf("%d",count);
}
