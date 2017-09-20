#include<stdio.h>
int main()
{
int numcount,counter,num,sum=0;
printf("enter the numbers to add:");
scanf("%d",&numcount);
printf("enter %d numbers:\n",numcount);
for(counter=0;counter<numcount;counter++)
{
scanf("%d",&num);
sum=sum+num;
}
printf("SUM=%d",sum);
return 0;
}

