#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter A Number : ");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	printf("%d * %d = %d\n",i,n,n*i);
}