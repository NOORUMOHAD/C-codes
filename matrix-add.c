#include<stdio.h>
int main()
{
	int m1[5][5],m2[5][5],m3[5][5],r,c,i,j;
	printf("\nEnter row and colomn :  ");
	scanf("%d%d",&r,&c);
	printf("\nEnter First Matrix Elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d\t",m1[i][j]);
		}
	}
	printf("\nEnter Second Matrix Elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d\t",m2[i][j]);
		}
	}
	printf("\n\nResult = \n");
	for(i=0;i<r;i++)
	{
	printf("\n");
		for(j=0;j<c;j++)
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",m3[i][j]);
		}
	}
	printf("\n");	
}
