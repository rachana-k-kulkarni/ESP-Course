#include<stdio.h>
int gethcf(int x,int y){
    int small,hcf=1;
    small = (x<y)?x:y;
    for(int i=1;i<=small;i++){
        if((x%i==0)&&(y%i==0))
        hcf = i;
    }
    return hcf;
}
int main(){
    int a,b,hcf;
    scanf("%d %d",&a,&b);
    hcf = gethcf(a,b);
    printf("%d",hcf);
}