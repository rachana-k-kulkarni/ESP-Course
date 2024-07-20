#include <stdio.h>
int compare_numbers(int no1,int no2);
int main()
{
int number1,number2,result;
scanf("%d",&number1);
scanf("%d",&number2);
result = compare_numbers(number1,number2);
if(result == 1)
printf("Same");
else
printf("Not Same");
return 0;
}
int compare_numbers(int no1,int no2)
{
int result=0;
if(no1==no2)
result = 1;
return result;
}