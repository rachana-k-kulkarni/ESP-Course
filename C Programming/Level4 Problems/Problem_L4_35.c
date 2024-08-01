#include<stdio.h>
int hcff(int p,int q){
    int small,hcf=1;
    small = (p<q)?p:q;
    for(int i=1;i<small;i++){
        if((p%i==0)&&(q%i)==0)
        hcf = i;
    }
    return hcf;
}
int lcmf(int x,int y){
    int lcm = (x*y)/hcff(x,y);
    return lcm;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lcmf(a,b));
}