#include<stdio.h>
int main()
{
	int num,next=0,sec=1,thir;
	printf("\nEnter a Number : ");
	scanf("%d",&num);
	for(		 ;next<=num;	 )
	{
		printf(" %d",next);
		thir=next;
		next=sec;
		sec=thir;
		next+=sec;
	}
	printf("\n");
}