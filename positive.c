#include<stdio.h>
int main()
{
int p;
printf("Enter the number");
scanf("%d",&p);
if(p<0)
{
printf("\nnegative");
}
else if(p>0)
{
printf("\n positive");
}
else
{
printf("\nZero");
}
return 0;
}
