#include <stdio.h>
int isPrime(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = isPrime(number);
if(result == 1)
printf("Number is Prime");
else
printf("Number is not Prime");
return 0;
}
int isPrime(int no)
{
int result = 1;
for(int i=2;i<no;i++){
    if((no%i)==0)
    result = 0;
}
return result;
}