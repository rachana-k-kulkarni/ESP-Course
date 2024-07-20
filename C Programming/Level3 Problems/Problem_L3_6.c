#include <stdio.h>
int reverse_number(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = reverse_number(number);
printf("%d",result);
return 0;
}
int reverse_number(int no)
{
int result=0;
while(no!=0){
    result = result*10 + (no%10);
    no = no/10; 
}
return result;
}