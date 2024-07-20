#include <stdio.h>
int sum14(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = sum14(number);
if(result == 1)
printf("Sum of Digits is 14");
else
printf("Sum of Digits is not 14");
return 0;
}
int sum14(int no)
{
int result=0,dig=0;
while(no!=0){
    dig = dig + (no%10);
    no = no/10;
}
if(dig==14)
result = 1;
return result;
}