#include <stdio.h>
int function(int no);
int main()
{
int number1, number2;
scanf("%d",&number1);
number2 = function(number1);
printf("%d",number2);
return 0;
}
int function(int no1)
{
int no2;
no2 = no1 - 5;
return no2;
}