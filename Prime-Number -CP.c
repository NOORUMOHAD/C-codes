#include<stdio.h>
int main()
{
 int num,i,flag=0;
 printf("\nEnter A Number To Find It Is Prime or Not : ");
 scanf("%d",&num);
 for(i=2;i<num;i++)
      {
	  if(num%i==0)
		flag++;
      }
 if(flag==0&&num!=1)
	printf("\nThe Number Is Prime \t Factor = %d \n",flag);
 else 
	printf("\nThe Number Is Not Prime \t Factor = %d\n",flag);
}