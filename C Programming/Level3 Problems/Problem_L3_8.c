#include <stdio.h>
int check_assending(int no);
int main()
{
int number, result;
scanf("%d",&number);
result = check_assending(number);
if(result == 1)
printf("Yes");
else
printf("No");;
return 0;
}
int check_assending(int no)
{
int result=1;
while(no!=0){
    if((no%10)<((no/10)%10))
    result = 0;
    no = no/10;
}
return result;
}