#include<stdio.h>
int main(){
    char a[50];
    int i = 0,j = 0;
    for(i;i<100;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n')
        break;
    }
    a[i]='\0';
    i = 0;
    while(a[i]=='0'){
        i++;
    }
     if (i > 0) { 
        j = 0;
        while (a[i] != '\0') {
            a[j++] = a[i++];
        }
        a[j] = '\0';   
    }
    printf("%s",a);
}