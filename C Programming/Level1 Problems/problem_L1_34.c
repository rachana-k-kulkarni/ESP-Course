// Get two 3-digit numbers from user. Print the difference between the one’s digit and
// hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s
// digit
#include<stdio.h>
int main ()
{
int x1,x2,y,tens1,tens2,huns,ones;
printf ("Enter two 3 Digit Numbers : ");
scanf("%d",&x1);
scanf("%d",&x2);
tens1=(x1/10)%10;
tens2=(x2/10)%10;
if(tens1>tens2){
    ones=x1%10;
    huns=x1/100;
}
else{
    ones=x2%10;
    huns=x2/100;
}
if(ones>huns)
printf("Difference is %d",ones-huns);
else
printf("Difference is %d",huns-ones);
}