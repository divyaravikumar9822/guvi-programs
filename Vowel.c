# include<stdio.h>
int main()
{
int lc,uc;
Char c;
Printf("Enter an alphabet");
Scanf("%c",&c);
lc=(c='a'||c='e'||c='i'||c='o'||c='u');
uc=(c='A'||c='E'||c='I'||c='O'||c='U');
if(lc||uc)
{
Printf("%c is a vowel",c);
else
Printf("%c is a consonant",c);
return 0;
}
