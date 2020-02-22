#include<stdio.h>
int rev(int num);
int main()
{
	int nu,re;
	printf("\nEnter A Number : ");
	scanf("%d",&nu);
	re=rev(nu);
	printf("\nReverse of %d is %d \n",nu,re);
}
int rev(int num)
{
	int i,rem,sum=0;
	for(i=num;i!=0;i/=10)
	{
		rem=i%10;
		sum=(sum*10)+rem;
	}
	return sum;
}