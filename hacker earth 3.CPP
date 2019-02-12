#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int no,i,temp,cont=0;
clrscr();
printf("enter a number\n");
scanf("%d",&no);
for(int j=no;j>=1;j--)
for(i=no;i>=1;i--)
{
temp=sqrt(i);
if(sqrt(i)==temp)
{
no=no-i;
cont++;
printf("(%d)^2 +\t",temp);
break;
}
}

printf("\n number of terms %d",cont);
getch();
}