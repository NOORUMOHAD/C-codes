#include<stdio.h>
#include<math.h>
int arm(int num,int pow);
int main()
{
	int nu,re,te,i=0;
	printf("\nEnter A Number : ");
	scanf("%d",&nu);
	for(te=nu;te!=0;te/=10)
	i++;
	re=arm(nu,i);
	if(re==nu)
	printf("\n%d is Armstrong Number \n",re);
		else
			printf("\n%d is Not Armstrong Number \n",re);
}
int arm(int num,int po)
{
	int i,rem,sum=0,t;
	for(t=num;t!=0;t/=10)
	{
		rem=t%10;
		sum+=pow(rem,po);
	}
		return sum;
}