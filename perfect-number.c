#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter A Number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		if(n%i==0)
			sum+=i;
	if(n==sum)
	printf("%d is Perfect Number \n",sum);
		else
			printf("%d Is Not A Perfect Number \n",n);
}