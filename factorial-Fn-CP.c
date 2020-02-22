#include<stdio.h>
int fact(int x);
int main()
{
	int num;
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	printf("\nFactorial of %d  =  %d\n\n",num,fact(num));
}
int fact(int x)
{
	int fact=1;
	for(int i=1;i<=x;i++)
	fact*=i;
	return fact;
}