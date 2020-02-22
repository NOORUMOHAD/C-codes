#include<stdio.h>
int fact(int f)
{
	if(f>=1)
		return f*fact(f-1);
	else
		return 1;
}
int main()
{
	int nu;
	printf("Enter A Number For Factorial : ");
	scanf("%d",&nu);
	printf("Factorial of %d is %d \n",nu,fact(nu));
}