#include<stdio.h>
int main(){
    int num,i,dig=0;
    char a[100];
    scanf("%d",&num);
    int num1 = num;
    while(num1!=0){
        dig++;
        num1 = num1/10;
    }
    for(i=0;i<dig;i++){
        a[i] = (num % 10) + '0';
        num = num/10;
    }
    a[i]='\0';
    for (int j = 0; j < dig / 2; j++) {
        char temp = a[j];
        a[j] = a[dig - j - 1];
        a[dig - j - 1] = temp;
    }
    printf("%s",a);
}