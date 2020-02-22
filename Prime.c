
#include<stdio.h>
int main()
{
 int num,i,flag=0,r;
 printf("\nEnter A Number To Find It Is Prime or Not : ");
 scanf("%d",&num);
 for(i=1;i<num;i++)
      {
r=num%i;
          if(num%i==0)
{
printf("\nFactors = %d \n",i);
                flag++;
}
      }
 if(flag==1)
        printf("\nThe Number Is Prime \n");
 else
        printf("\nThe Number Is Not Prime \n");
}
