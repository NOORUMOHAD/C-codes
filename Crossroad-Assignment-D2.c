#include<stdio.h>
int main()
{
          // First Assignment
          char u;
          printf(" enter a character : ");
          scanf("%c",&u);
          printf("\n you enterd is '%c' \n\n\n",u);
    
          // Second Assignment
          int number1;
          float number2,sum;
          printf(" Enter 2 numbers to find sum : ");
          scanf("%d%f",&number1,&number2);
          sum=number1+number2;
          printf("\n sum = %f \n\n\n",sum);
    
          // Third Assignment
          int pr;
          float rate,year,intrest;
          printf("\nEnter your principal amount : ");
          scanf("%d",&pr);
          printf("\nEnter rate of intrest : ");
          scanf("%f",&rate);
          printf("\nEnter number of years : ");
          scanf("%f",&year);
          intrest=(pr*rate*year)/100;
          printf("\nThe Simple Intrest is : %f \n\n\n",intrest);
    

}