#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,m,i,j,c=0;
int mat[5][5],temp[5][5];
printf("enter size of class room(seats) in form of matrix (n*m)\n");
scanf("%d%d",&m,&n);
printf("enter 1 for empty and 0 for occupied row by row\n");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
scanf("%d",&mat[i][j]);
temp[j][i]=mat[i][j];
}
clrscr();
printf("seat map of class where 0==occupied & 1==empty\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d\t",mat[i][j]);
printf("\n");
}
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
if(mat[i][j]==1&&mat[i][j+1]==1)
c=c+1;
}
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
if(temp[i][j]==1&&temp[i][j+1]==1)
c=c+1;
}
printf("number of ways in which two student set togather is %d\n",c);
getch();
}