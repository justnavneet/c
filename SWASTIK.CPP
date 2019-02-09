#include<stdio.h>
#include<conio.h>
/*
RKT problem to print swastika
*/
void main()

{
int i,j;
clrscr();
printf("hold space to print\n");
for(i=1;i<=9;i++)
{
	if(i==5)
	for(j=1;j<=9;j++)
	{
		printf("* ");
		getch();
	}
	if(i==1)
	for(j=1;j<=9;j++)
	if(j==2||j==3||j==4)
	{
		printf("  ");
		getch();
	}
	else
	{
		printf("* ");
		getch();
	}
	if(i==9)
	for(j=1;j<=9;j++)
	if(j==6||j==7||j==8)
	{
		printf("  ");
		getch();
	}
	else
	{
		printf("* ");
		getch();
	}
	if(i==2||i==3||i==4)
	for(j=1;j<=9;j++)
	if(j==1||j==5)
	{
		printf("* ");
		getch();
	}
	else
	{
		printf("  ");
		getch();
	}
	if(i==6||i==7||i==8)
	for(j=1;j<=9;j++)
	if(j==9||j==5)
	{
		printf("* ");
		getch();
	}
	else
	{
		printf("  ");
		getch();
	}


printf("\n");
}
getch();
printf("enter zero to exit");
scanf("%d",&i);
}