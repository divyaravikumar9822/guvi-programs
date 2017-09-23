#include<stdio.h>
int main()
{
int n,rem,revInt=0,oriInt;
printf("enter an integer:");
scanf("%d",&n);
oriInt=n;
while(n!=0)
{
rem=n%10;
revInt=revInt*10+rem;
n/=10;
}
if(oriInt==revInt)
printf("%d is a palindrome.",oriInt);
else
printf("%d is not a palindrome.",oriInt);
return 0;
}
