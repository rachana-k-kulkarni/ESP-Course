#include <stdio.h>
int swap_digits(int no);
int main()
{
int number, result;
scanf("%d",&number);
result = swap_digits(number);
printf("%d",result);
return 0;
}
int swap_digits(int no)
{
int result;
result = 10*(no%10) + (no/10);
return result;
}