#include<stdio.h>
int main()
{
int base,exp;
long long res=1;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exp:");
scanf("%d",&exp);
while(exp!=0)
{
res*=base;
--exp;
}
printf("answer=%lld",res);
return 0;
}
