#include<stdio.h>
void prime(int x);
int main()
{
    int num;
    printf("\nEnter a Number : ");
    scanf("%d",&num);
	 prime(num);
}
void prime(int x)
{
    int flag=0,i;
    for(i=2;i<x;i++)
	 {
		if(x%i==0)
		{
			flag++;
			break;
		}
	 }
	 if(flag==0&&x>1)
    printf("\n%d Is Prime Number\n",x);
		else
    	printf("\n%d Is Not Prime Number\n",x);
}