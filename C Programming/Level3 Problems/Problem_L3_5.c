#include <stdio.h>
int find_no_of_zeros(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = find_no_of_zeros (number);
printf("%d",result);
return 0;
}
int find_no_of_zeros (int no)
{
int result=0;
while(no!=0){
    if((no%10)==0)
    result++;
    no = no/10;
}
return result;
}