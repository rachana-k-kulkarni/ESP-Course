#include<stdio.h>
int main(){
    int arr[10]={6,12,3,15,7};
    int i =(sizeof(arr)/sizeof(arr[0]))-1;
    int carry = 0;
    for(i;i>=0;i--){
        if((arr[i]/10)==0){
        arr[i]=carry + arr[i];
        carry = 0;
    }
        else{
            carry = arr[i]/10;
            arr[i]=arr[i]%10;
        }
    }
    i = 0;
    while(arr[i]!=0){
        printf("%d\n",arr[i]);
        i++;
    }
}
