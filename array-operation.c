#include<stdio.h>
int main()
{
	int a[30],i,nu;
	printf("Enter No. Of Elements : ");
	scanf("%d",&nu);
	printf("\nEnter Array Elements \n");
	for(i=0;i<nu;i++)
		scanf("%d",&a[i]);
	printf("\nArray Elements Are : \n");
	for(i=0;i<nu;i++)
		printf("%d ",a[i]);
	printf("\n");
}