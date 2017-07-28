#include<stdio.h>
int main()
{
char c;
printf("Enter the character:");
scanf("%c",&c);
if(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("%c ia a alphabet",c);
else
printf("%c is not a alphabet",c);
return 0;
}
