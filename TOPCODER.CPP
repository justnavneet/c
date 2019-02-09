#include<iostream.h>
#include<conio.h>
/*
some one ask me to desine a funtion which take for input array name , array size , number of pluse and minus signs
and make a exper using them where the total number of + and - is (n-1) where n is number of element 
and the the exper give minimum output
*/
int process(int arr[],int size,int p,int n);
void main()
{
clrscr();
int input,a[50],i,p,n;
cout<<"enter number input"<<endl;
cin>>input;
cout<<"enter number of nigative (-) and posative (+) sing"<<endl;
cin>>n>>p;
cout<<"enter nubmer one by one"<<endl;
for(i=0;i<input;i++)
cin>>a[i];
cout<<endl<<"output == "<<process(a,input,p,n);
getch();
}

int process(int arr[],int size,int p,int n)
{
	int i,j,t;
	for(i=0;i<(size-1);i++)
	for(j=0;j<size-1-i;j++)
	if(arr[j]<arr[j+1])
	{
		t=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=t;
	}
	t=0;
	for(i=0;i<=p;i++)
	{
		t=t+arr[i];
		if(i==p)
			cout<<"("<<arr[i]<<")";
		else
			cout<<"("<<arr[i]<<")"<<"+";
	}
	for(j=i;j<(n+i);j++)
	{
		t=t+(-1*arr[j]);
		cout<<"-"<<"("<<arr[j]<<")";
	}
	cout<<"="<<t;
	return t;
}