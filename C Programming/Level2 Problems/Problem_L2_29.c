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
int getlcm(int p,int q){
    int hcf,lcm;
    hcf = gethcf(p,q);
    lcm = (p*q)/hcf;
    return lcm;
}
int main(){
    int a,b,c,lcmab,lcm;
    scanf("%d %d %d",&a,&b,&c);
    lcmab = getlcm(a,b);
    lcm = getlcm(lcmab,c);
    printf("%d",lcm);
}
