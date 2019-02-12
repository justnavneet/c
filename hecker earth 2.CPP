#include<stdio.h>
#include<conio.h>
#include<string.h>
char s[10];
int check(int c)
{
if(s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u')
return 1;
else
return 0;
}
void deleat(int d)
{
for(int  i=d;i<strlen(s)+1;i++)
s[i]=s[i+1];
}
void main()
{
clrscr();
printf("enter a String\n");
gets(s);
int i;
for(int j=0;j<=strlen(s);j++)
for(i=0;i<strlen(s);i++)
if(check(i)==1&&check(i+1)==1)
deleat(i+1);
printf("%s",s);
getch();
}