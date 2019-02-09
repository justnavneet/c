#include<stdio.h>
#include<conio.h>
/* simulation of a knight moves on 8*8 chess bord
you enter the initial coordinate of knight
and it show all poseable moves
*/
int mov[8][2];
int chess[8][8];
void move(int x,int y)
{
    for(int i=0;i<8;i++)
    {
    mov[i][0]=x;
    mov[i][1]=y;
    }
    mov[0][0]=mov[0][0]+2; mov[0][1]=mov[0][1]-1;  //1
    mov[1][0]=mov[1][0]+2; mov[1][1]=mov[1][1]+1;  //2
    mov[2][0]=mov[2][0]-2; mov[2][1]=mov[2][1]-1;  //3
    mov[3][0]=mov[3][0]-2; mov[3][1]=mov[3][1]+1;  //4
    mov[4][0]=mov[4][0]+1; mov[4][1]=mov[4][1]-2;  //5
    mov[5][0]=mov[5][0]-1; mov[5][1]=mov[5][1]-2;  //6
    mov[6][0]=mov[6][0]+1; mov[6][1]=mov[6][1]+2;  //7
    mov[7][0]=mov[7][0]-1; mov[7][1]=mov[7][1]+2;  //8
	     //         ^                      ^
	     //         X                      Y
}
void main()
{
clrscr();
int x,y,i,j;
for(i=0;i<8;i++)
for(j=0;j<8;j++)
chess[i][j]=0;
printf("enter initial co-d of kinght\n");
scanf("%d%d",&x,&y);
printf("'#'in kinght and 1 are leagle moves\n\n\n");
move(x,y);
for(i=0;i<8;i++)
{
if(mov[i][0]>=0&&mov[i][1]>=0&&mov[i][0]<8&&mov[i][1]<8)
{
//printf("(%d,%d);",mov[i][0],mov[i][1]);
chess[mov[i][0]][mov[i][1]]=1;
}
}
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
if(i==x&&j==y)
printf("# ");
else
printf("%d ",chess[i][j]);
}
printf("\n");
}

getch();
}